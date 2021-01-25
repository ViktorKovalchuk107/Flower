#include "SnakeFactory.h"

SnakeFactory::SnakeFactory(IAddSnakeListener& addSnakeListener,
						   IFlowerEatedChecker& checker,
						   IRemoveSnakeListener& removeSnakeListener)
	: mAddSnakeListener{addSnakeListener}
	, mFlowerEatedChecker{ checker }
	, mRemoveSnakeListener{ removeSnakeListener }
{
}

std::unique_ptr<Snake>
SnakeFactory::createSnake(std::vector<Coords>& coords)
{
	auto snake = std::make_unique<Snake>(coords, mFlowerEatedChecker, mRemoveSnakeListener);
	mAddSnakeListener.addSnake(snake);
	return snake;
}