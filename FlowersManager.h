#pragma once

#include "IFlowerEatedChecker.h"
#include "IAddFlowerListener.h"
#include "IRemoveFlowerListener.h"

class FlowersManager
	: public IFlowerEatedChecker
	, public IAddFlowerListener
	, public IRemoveFlowerListener {
public:
	void checkFlowerEated(Snake& snake) override;

	void addFlower(std::unique_ptr<Flower>& flower) override;

	void removeFlower(std::unique_ptr<Flower>& flower) override;
private:
	std::vector<std::unique_ptr<Flower>> mFlowers;

};