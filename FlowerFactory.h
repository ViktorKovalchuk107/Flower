#pragma once

#include "IFlowerFactory.h"
#include "ISnakeFactory.h"
#include "IAddFlowerListener.h"

class FlowerFactory : public IFlowerFactory {
public:
	FlowerFactory(ISnakeFactory& snakeFactory, IAddFlowerListener& listener);
	std::unique_ptr<Flower> createFlower(Coords coords) override;

private:
	ISnakeFactory& mSnakeFactory;
	IAddFlowerListener& mAddFlowerListener;
};