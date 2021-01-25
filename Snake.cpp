#include "Snake.h"

namespace {
	const size_t SNAKE_HEAD_INDEX = 0;
	const size_t MIN_SNAKE_SIZE = 2;
}

Snake::Snake(std::vector<Coords> coords, IFlowerEatedChecker& checker,
	         IRemoveSnakeListener& listener)
	: mChecker{ checker }
	, mListener{ listener }
	, mCoords{ coords }
{
}

// looks like it is redundant - we can just give headPos as parameter
bool Snake::getHeadPos(Coords& coords)
{
	if (mCoords.size() >= MIN_SNAKE_SIZE) {
		coords = mCoords[SNAKE_HEAD_INDEX];
		return true;
	}
	return false;
}

// add speed
void Snake::updatePos()
{
	// move mCoords - head moves randomly, and we just add new head coords
	// to mCoords
	// befor move check if new place is empty
}

void Snake::onMouseButtonClick(Coords coords)
{
	auto it = std::find(mCoords.begin(), mCoords.end(), coords);
	if (it != mCoords.end()) {
		mCoords.pop_back();
	}
	if (mCoords.size() < MIN_SNAKE_SIZE) {
		mListener.removeSnake(*this);
	}
}

