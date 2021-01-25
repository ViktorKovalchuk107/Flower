#pragma once

#include "Coords.h"

class IIsFileadEmptyChecker {
public:
	virtual ~IIsFileadEmptyChecker() = default;

	virtual bool isFieldEmpty(Coords&) = 0;
};