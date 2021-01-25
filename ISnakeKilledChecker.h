#pragma once

#include "Snake.h"

class ISnakeKilledChecker {
public:
	virtual ~ISnakeKilledChecker() = default;

	virtual void checkSmallSnakes() = 0;
};
