#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
: ASpell("Fwoosh", "fwooshed") {

}

Fwoosh::Fwoosh(Fwoosh &src)
: ASpell(src) {

}

Fwoosh::~Fwoosh() {

}

Fwoosh & Fwoosh::operator=(Fwoosh &rhs) {
	_name = rhs._name;
	_effects = rhs._effects;
	return *this;
}

Fwoosh *Fwoosh::clone() const {
	return new Fwoosh();
}
