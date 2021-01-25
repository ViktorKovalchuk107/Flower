#pragma once

#include "Coords.h"

//Interface allow to listen events from click on mouse button
class IMouseButtonClickListener {
	virtual ~IMouseButtonClickListener() = default;

	virtual void onMouseButtonClick(Coords coords) = 0;
};