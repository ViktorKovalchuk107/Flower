#include "FlowersManager.h"

namespace {
	const size_t SNAKE_HEAD_INDEX = 0;
}

void FlowersManager::addFlower(std::unique_ptr<Flower>& flower)
{
	// add serach | operator == for Flower
	auto it = std::find(mFlowers.begin(), mFlowers.end(), flower);
	if (it != mFlowers.end()) {
		mFlowers.push_back(flower);
	}
	// else warning
}

void FlowersManager::removeFlower(std::unique_ptr<Flower>& flower)
{
	// smae as before
	auto it = std::find(mFlowers.begin(), mFlowers.end(), flower);
	if (it != mFlowers.end()) {
		mFlowers.erase(it);
	}
	// else warnign
}


// checkFlowerEated - need to optimise
void FlowersManager::checkFlowerEated(Snake& snake)
{
/*  Coords snakePos = snake.getHeadPos();
*   int i = 0;
	while (i < mFlower.size())
	{
		if (mFlower[i].getPos == snakePos) {
			mFlower.erase(mFlower.begin() + i);
			break;
		}
		else {
			i++
		}
	}
}