#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <map>
#include "ASpell.hpp"

class SpellBook {
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellname);
	ASpell* createSpell(std::string const &spellname);

private:
	std::map<std::string, ASpell *> _spells;

	SpellBook(SpellBook &src);
	SpellBook &operator=(SpellBook &rhs);

};

#endif
