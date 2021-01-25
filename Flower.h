#pragma once

#include "Coords.h"

class Flower {
public:
	Flower(Coords);
	void giveCoint();

private:
	Coords mCoords;
};
