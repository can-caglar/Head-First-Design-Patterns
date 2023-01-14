#include "Condements.h"

Condements::Condements(Beverage* beverageToCondement)
{
	_beverageBeingCondemented = beverageToCondement;
}

std::string SteamedMilk::description()
{
	return _beverageBeingCondemented->description() + " With steamed milk.";
}

double SteamedMilk::cost()
{
	return _beverageBeingCondemented->cost() + 0.10;
}

std::string Mocha::description()
{
	return _beverageBeingCondemented->description() + " With some mocha.";
}

double Mocha::cost()
{
	return _beverageBeingCondemented->cost() + 0.20;
}
