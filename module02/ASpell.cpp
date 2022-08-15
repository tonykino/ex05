#include "ASpell.hpp"

ASpell::ASpell()
: _name(""), _effects("") {

}

ASpell::ASpell(std::string name, std::string effects)
: _name(name), _effects(effects) {

}

ASpell::ASpell(const ASpell &src)
: _name(src._name), _effects(src._effects) {

}

ASpell::~ASpell() {

}

ASpell &ASpell::operator=(const ASpell &rhs) {
	_name = rhs._name;
	_effects = rhs._effects;
	return *this;
}

std::string ASpell::getName() const {
	return _name;
}

std::string ASpell::getEffects() const {
	return _effects;
}

void ASpell::launch(const ATarget &target) {
	// TODO - what if no target ?
	target.getHitBySpell(*this);
}
