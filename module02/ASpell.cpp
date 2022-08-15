#include "ASpell.hpp"

ASpell::ASpell() {
	return ;
}

ASpell::ASpell(std::string name, std::string effects)
: _name(name), _effects(effects) {
	return ;
}


ASpell::ASpell(ASpell const &src)
: _name(src._name), _effects(src._effects) {
	return ;
}

ASpell::~ASpell() {
	return ;
}

ASpell &ASpell::operator=(ASpell const &rhs) {
	_name = rhs._name;
	_effects = rhs._effects;
	return *this;
}

std::string ASpell::getName(void) const {
	return _name;
}

std::string ASpell::getEffects(void) const {
	return _effects;
}

void ASpell::launch(const ATarget &target) {
	target.getHitBySpell(*this);
}