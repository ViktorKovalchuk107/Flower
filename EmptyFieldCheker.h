#pragma once

#include "IIsFiledEmptyCheker.h"
#include "INotEmptyFieldListener.h"

#include <set>

class EmptyFieldChecker
	: public IIsFileadEmptyChecker
	, public INotEmptyFieldListener {
public:
	void addNotEmptyField(Coords& coords) override;

	bool isFieldEmpty(Coords& coords) override;

private:
	std::set<Coords> mNotEmptyCoords;
};