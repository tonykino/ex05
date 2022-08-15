#include "Fireball.hpp"

Fireball::Fireball()
: ASpell("Fireball", "burnt to a crisp") {

}

Fireball::Fireball(Fireball &src)
: ASpell(src) {

}

Fireball::~Fireball() {

}

Fireball & Fireball::operator=(Fireball &rhs) {
	_name = rhs._name;
	_effects = rhs._effects;
	return *this;
}

Fireball *Fireball::clone() const {
	return new Fireball();
}
