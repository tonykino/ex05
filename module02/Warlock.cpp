#include "Warlock.hpp"

Warlock::Warlock() {
	return ;
}

Warlock::Warlock(std::string name, std::string title)
: _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::Warlock(Warlock const & src)
: _name(src._name), _title(src._title) {
	return ;
}

Warlock &Warlock::operator=(Warlock const & rhs) {
	_name = rhs._name;
	_title = rhs._title;

	return *this;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
	return ;
}

std::string const &Warlock::getName() const {
	return _name;
}

std::string const &Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(const std::string &title) {
	_title = title;
	return ;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string name) {
	_spellbook.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget &target) {
	ASpell *spell = _spellbook.createSpell(name);
	if (spell)
		spell->launch(target);
}
