#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph: public ASpell {
public:
	Polymorph();
	Polymorph(Polymorph &src);
	virtual ~Polymorph();
	Polymorph &operator=(Polymorph &rhs);

	Polymorph* clone() const;
};

#endif
