#pragma once

#include "IAddSnakeListener.h"
#include "ISnakeKilledChecker.h"

class SnakesManager
	: public IAddSnakeListener
	, public ISnakeKilledChecker {
public:
	SnakesHandler();

	void addSnake(std::unique_ptr<Snake>& snake) override;

	void checkSmallSnakes() override;
private:
	std::vector<std::unique_ptr<Snake>> mSnakes;

};
