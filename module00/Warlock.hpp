#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock {
public:
	Warlock(std::string name, std::string title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;
	void setTitle(const std::string &title);
	void introduce() const;

private:
	std::string _name;
	std::string _title;
	
	Warlock();
	Warlock(const Warlock &src);
	Warlock &operator=(const Warlock &rhs);
};

#endif