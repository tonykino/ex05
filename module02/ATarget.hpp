#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
public:
	ATarget();
	ATarget(std::string type);
	ATarget(ATarget const &src);
	virtual ~ATarget();
	ATarget &operator=(ATarget const &rhs);

	const std::string &getType(void) const;
	virtual ATarget *clone(void) const = 0;
	void getHitBySpell(const ASpell &spell) const;

private:
	std::string _type;

};


#endif
