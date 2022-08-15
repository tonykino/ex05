#include "Polymorph.hpp"

Polymorph::Polymorph()
: ASpell("Polymorph", "turned into a critter") {

}

Polymorph::Polymorph(Polymorph &src)
: ASpell(src) {

}

Polymorph::~Polymorph() {

}

Polymorph & Polymorph::operator=(Polymorph &rhs) {
	_name = rhs._name;
	_effects = rhs._effects;
	return *this;
}

Polymorph *Polymorph::clone() const {
	return new Polymorph();
}
