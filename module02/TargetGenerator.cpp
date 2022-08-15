#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::~TargetGenerator() {
	for (std::map<std::string, ATarget *>::iterator it = _targets.begin(); it != _targets.end(); it++) {
		delete it->second;
	}
}

void TargetGenerator::learnTargetType(ATarget* target) {
	_targets.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &type) {
	if (_targets.count(type)){
		delete _targets.find(type)->second;
		_targets.erase(type);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &type) {
	try 
	{
		return _targets.at(type);
	}
	catch (const std::exception &e)
	{
		return NULL;
	}
}
