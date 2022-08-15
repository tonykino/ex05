#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall: public ATarget {
public:
	BrickWall();
	BrickWall(BrickWall &src);
	virtual ~BrickWall();
	BrickWall &operator=(BrickWall &rhs);

	BrickWall* clone() const;
};

#endif
