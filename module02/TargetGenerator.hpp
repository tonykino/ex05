#ifndef TARGET_GENERATOR_HPP
#define TARGET_GENERATOR_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator {
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &type);
	ATarget* createTarget(std::string const &type);

private:
	std::map<std::string, ATarget *> _targets;

	TargetGenerator(TargetGenerator &src);
	TargetGenerator &operator=(TargetGenerator &rhs);

};

#endif
