#pragma once

#include "Coords.h"
#include "Snake.h"

#include <memory>

//Interface allow to listen events from click on mouse button
class IAddSnakeListener {
	virtual ~IAddSnakeListener() = default;

	virtual void addSnake(std::unique_ptr<Snake>& newSnake) = 0;
};