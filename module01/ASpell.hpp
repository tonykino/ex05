#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
public:
	ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(ASpell const &src);
	virtual ~ASpell();
	ASpell &operator=(ASpell const &rhs);

	std::string getName(void) const;
	std::string getEffects(void) const;
	virtual ASpell *clone(void) const = 0;
	void launch(const ATarget &target);
	
protected:
	std::string _name;
	std::string _effects;

};

#endif
