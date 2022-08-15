#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
public:
	Warlock(std::string name, std::string title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;
	void setTitle(const std::string &title);
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, ATarget &target);

private:
	std::string _name;
	std::string _title;
	SpellBook	_spellbook;

	Warlock();
	Warlock(const Warlock &src);
	Warlock &operator=(const Warlock &rhs);
};

#endif