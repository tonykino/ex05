#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
: _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl; 
}

std::string Warlock::getName() const {
	return _name;
}

std::string Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(const std::string &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	_spells.insert(std::make_pair(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string spellname) {
	if (_spells.count(spellname)){
		delete _spells.find(spellname)->second;
		_spells.erase(spellname);
	}
}

void Warlock::launchSpell(std::string spellname, ATarget &target) {
	try 
	{
		_spells.at(spellname)->launch(target);
	}
	catch (const std::exception &e)
	{
		;
	}
}
