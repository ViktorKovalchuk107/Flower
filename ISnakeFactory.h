#pragma once

#include "Snake.h"

#include <memory>
#include <vector>

// Interfaca that allows us to create Snake objects
class ISnakeFactory {
public:
	virtual ~ISnakeFactory() = default;

	virtual std::unique_ptr<Snake> createSnake(std::vector<Coords>&) = 0;
};