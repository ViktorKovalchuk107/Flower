#pragma once

#include "Coords.h"
#include "Flower.h"

#include <memory>

// Interfaca that allows us to create Flower objects
class IFlowerFactory {
public:
	virtual ~IFlowerFactory() = default;

	virtual std::shared_ptr<Flower> createFlower(Coords coords) = 0;
};