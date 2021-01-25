#include "FlowerFactory.h"

std::unique_ptr<Flower> 
FlowerFactory::createFlower(Coords coords)
{
	auto flower = std::make_unique<Flower>(coords);
	mAddFlowerListener.addFlower(flower);
	mSnakeFactory.createSnake(); 
	return flower;
}