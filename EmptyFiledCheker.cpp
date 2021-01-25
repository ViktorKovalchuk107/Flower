#include "EmptyFieldCheker.h"

void EmptyFieldChecker::addNotEmptyField(Coords& coords)
{
	mNotEmptyCoords.insert(coords);
}

// add template : Coords& (flowers), std::vector<Coords>& (snakes)
bool EmptyFieldChecker::isFieldEmpty(Coords& coords)
{
	auto it = std::find(mNotEmptyCoords.begin(), mNotEmptyCoords.end(), coords);
	return (it != mNotEmptyCoords.end());
}