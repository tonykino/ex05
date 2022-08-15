#include "SpellBook.hpp"

SpellBook::SpellBook() {
	return ;
}

SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++) {
		delete it->second;
	}
}

void SpellBook::learnSpell(ASpell *spell) {
	if (!spell) return;

	_spells.insert(std::make_pair(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &name) {
	if (_spells.count(name)) {
		delete (_spells.find(name))->second;
		_spells.erase(name);
	}
}

ASpell *SpellBook::createSpell(std::string const &name) {
	try {
		return _spells.at(name);
	}
	catch(const std::exception& e) {
		return NULL;
	}
}
