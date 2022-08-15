#include "Dummy.hpp"

Dummy::Dummy()
: ATarget("Target Practice Dummy") {

}

Dummy::Dummy(Dummy &src)
: ATarget(src) {

}

Dummy::~Dummy() {

}

Dummy & Dummy::operator=(Dummy &rhs) {
	_type = rhs._type;
	return *this;
}

Dummy *Dummy::clone() const {
	return new Dummy();
}
