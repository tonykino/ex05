#include "ATarget.hpp"

ATarget::ATarget() {
	return ;
}

ATarget::ATarget(std::string type)
: _type(type) {
	return ;
}

ATarget::ATarget(ATarget const &src)
: _type(src._type) {
	return ;
}

ATarget::~ATarget() {
	return ;
}

ATarget &ATarget::operator=(ATarget const &rhs) {
	_type = rhs._type;
	return *this;
}

const std::string &ATarget::getType(void) const {
	return _type;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}