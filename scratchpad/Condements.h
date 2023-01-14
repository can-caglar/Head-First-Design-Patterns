#pragma once

#include "Beverage.h"

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
	SteamedMilk(Beverage* beverageToCondement) : Condements(beverageToCondement) {};
	std::string description() override;
	virtual double cost() override;
};

class Mocha : public Condements
{
public:
	Mocha(Beverage* beverageToCondement) : Condements(beverageToCondement) {}
	std::string description() override;
	double cost() override;
};