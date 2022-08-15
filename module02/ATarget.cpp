#include "ATarget.hpp"

ATarget::ATarget()
: _type("") {

}

ATarget::ATarget(std::string type)
: _type(type) {

}

ATarget::ATarget(const ATarget &src)
: _type(src._type) {

}

ATarget::~ATarget() {

}

ATarget &ATarget::operator=(const ATarget &rhs) {
	_type = rhs._type;
	return *this;
}

const std::string &ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	// TODO - What if no spell ?
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
