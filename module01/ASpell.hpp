#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
public:
	ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(const ASpell &src);
	virtual ~ASpell();
	ASpell &operator=(const ASpell &rhs);

	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell* clone() const = 0;
	void launch(const ATarget &target);

protected:
	std::string _name;
	std::string _effects;
};

#endif