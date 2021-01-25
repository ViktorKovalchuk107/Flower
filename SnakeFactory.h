#pragma once

#include "ISnakeFactory.h"
#include "IAddSnakeListener.h"
#include "IFlowerEatedChecker.h"
#include "IRemoveSnakeListener.h"

class SnakeFactory : public ISnakeFactory {
public:
	SnakeFactory(IAddSnakeListener& addSnakeListener, IFlowerEatedChecker& checker,
				 IRemoveSnakeListener& removeSnakeListener);
	std::unique_ptr<Snake> createSnake(std::vector<Coords>& coords) override;

private:
	IAddSnakeListener& mAddSnakeListener;
	IFlowerEatedChecker& mFlowerEatedChecker;
	IRemoveSnakeListener& mRemoveSnakeListener;

};