#pragma once

#include "Flower.h"
#include <memory>

class IRemoveFlowerListener {
public:
	virtual ~IRemoveFlowerListener() = default;

	virtual void removeFlower(std::unique_ptr<Flower>& flower) = 0;
};