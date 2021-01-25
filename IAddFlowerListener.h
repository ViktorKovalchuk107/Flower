#pragma once

#include "Flower.h"

#include <memory>

class IAddFlowerListener {
public:
	virtual ~IAddFlowerListener() = default;

	virtual void addFlower(std::unique_ptr<Flower>& flower) = 0;
};