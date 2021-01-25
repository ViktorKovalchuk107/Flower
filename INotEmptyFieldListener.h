#pragma once

#include "Coords.h"

class INotEmptyFieldListener {
public:
	virtual ~INotEmptyFieldListener() = default;

	virtual void addNotEmptyField(Coords&) = 0;
};