#pragma once

#include "Coords.h"
#include "Snake.h"

#include <vector>
#include <map>

//Interface allow to listen events from click on mouse button
class IFlowerEatedChecker {
	virtual ~IFlowerEatedChecker() = default;

	virtual void checkFlowerEated(Snake& snake) = 0;
};