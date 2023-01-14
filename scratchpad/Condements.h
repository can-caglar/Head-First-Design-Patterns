#pragma once

#include "Beverage.h"
#include <array>

// this class will decorate Beverages
class Condements : public Beverage
{
public:
	Condements(Beverage* beverageToCondement);
protected:
	Beverage* _beverageBeingCondemented;
};

class SteamedMilk : public Condements
{
public:
	SteamedMilk(Beverage* beverageToCondement) 
		: Condements(beverageToCondement)
		, _myCosts(std::array<double, SIZE_COUNT>{0.1, 0.15, 0.2}) {};

	std::string description() override;
	double cost() override;
	Size getSize() override;
protected:
	const std::array<double, SIZE_COUNT> _myCosts;
};

class Mocha : public Condements
{
public:
	Mocha(Beverage* beverageToCondement) 
		: Condements(beverageToCondement)
		, _myCosts(std::array<double, SIZE_COUNT>{0.1, 0.15, 0.2}) {};
	std::string description() override;
	double cost() override;
	Size getSize() override;
protected:
	const std::array<double, SIZE_COUNT> _myCosts;
};