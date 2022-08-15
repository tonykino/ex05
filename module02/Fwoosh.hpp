#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh: public ASpell {
public:
	Fwoosh();
	Fwoosh(Fwoosh &src);
	virtual ~Fwoosh();
	Fwoosh &operator=(Fwoosh &rhs);

	Fwoosh* clone() const;
};

#endif
