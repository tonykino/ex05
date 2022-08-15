#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++) {
		delete it->second;
	}
}

void SpellBook::learnSpell(ASpell* spell) {
	_spells.insert(std::make_pair(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spellname) {
	if (_spells.count(spellname)){
		delete _spells.find(spellname)->second;
		_spells.erase(spellname);
	}
}

ASpell* SpellBook::createSpell(std::string const &spellname) {
	try 
	{
		return _spells.at(spellname);
	}
	catch (const std::exception &e)
	{
		return NULL;
	}
}
