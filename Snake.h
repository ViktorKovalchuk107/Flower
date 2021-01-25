#pragma once

#include "Coords.h"
#include "IFlowerEatedChecker.h"
#include "IRemoveSnakeListener.h"
#include "IMouseButtonClickListener.h"

#include <vector>

class Snake : public IMouseButtonClickListener{
public:
	Snake(std::vector<Coords> coords, IFlowerEatedChecker& checker,
		  IRemoveSnakeListener& listener);

	bool getHeadPos(Coords& coords);

	void updatePos();

	void onMouseButtonClick(Coords coords) override;

private:
	IFlowerEatedChecker& mChecker;
	IRemoveSnakeListener& mListener;
	std::vector<Coords> mCoords;
};