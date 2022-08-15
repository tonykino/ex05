#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy: public ATarget {
public:
	Dummy();
	Dummy(Dummy &src);
	virtual ~Dummy();
	Dummy &operator=(Dummy &rhs);

	Dummy* clone() const;
};

#endif
