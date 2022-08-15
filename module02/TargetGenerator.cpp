#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
	return ;
}

TargetGenerator::~TargetGenerator() {
	for (std::map<std::string, ATarget *>::iterator it = _targets.begin(); it != _targets.end(); it++) {
		delete it->second;
	}
}

void TargetGenerator::learnTargetType(ATarget *target){
	if (!target) return;

	_targets.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &target) {
	if (_targets.count(target)) {
		delete (_targets.find(target))->second;
		_targets.erase(target);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &target) {
	try {
		return _targets.at(target);
	}
	catch(const std::exception& e) {
		return NULL;
	}
}
