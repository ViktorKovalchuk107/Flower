#include "SnakesManager.h"

void SnakesManager::addSnake(std::unique_ptr<Snake>& newSnake)
{
	mSnakes.push_back(newSnake);
}

void SnakesManager::checkSmallSnakes()
{

}