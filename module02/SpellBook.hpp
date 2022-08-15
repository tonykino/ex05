#ifndef SPELL_BOOK_HPP
#define SPELL_BOOK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook {
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell *createSpell(std::string const &);

private:
	std::map<std::string, ASpell *> _spells;

	SpellBook(SpellBook &src);
	SpellBook &operator=(SpellBook &rhs);

};

#endif
