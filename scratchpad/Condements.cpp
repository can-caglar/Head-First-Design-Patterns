#include "Condements.h"

#include <iostream>

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
	std::cout << "SteamedMilk bevvy size = " << _beverageBeingCondemented->getSize() << std::endl;

	return _beverageBeingCondemented->cost() + _myCosts[_beverageBeingCondemented->getSize()];
}

Beverage::Size SteamedMilk::getSize()
{
	return _beverageBeingCondemented->getSize();
}

std::string Mocha::description()
{
	return _beverageBeingCondemented->description() + " With some mocha.";
}

double Mocha::cost()
{
	std::cout << "mocha bevvy size = " << _beverageBeingCondemented->getSize() << std::endl;
	return _beverageBeingCondemented->cost() + _myCosts[_beverageBeingCondemented->getSize()];
}

Beverage::Size Mocha::getSize()
{
	return _beverageBeingCondemented->getSize();
}
