#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "SpellBook.hpp"
#include "ASpell.hpp"

class ASpell;

class Warlock {
public:
	Warlock(std::string name, std::string title);
	virtual ~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(const std::string &title);
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string name);
	void launchSpell(std::string name, ATarget &target);
	
private:
	std::string _name;
	std::string _title;
	SpellBook	_spellbook;

	Warlock();
	Warlock(Warlock const & src);
	Warlock &operator=(Warlock const & rhs);
};

#endif
