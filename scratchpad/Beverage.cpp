#include "Beverage.h"

void Beverage::setSize(Size newSize)
{
	_size = newSize;
}

Beverage::Size Beverage::getSize()
{
	return _size;
}

std::string DarkRoast::description()
{
	return "A strong, bold, " + _sizeStrings[_size] + " coffee that is roasted for longer.";
}

double DarkRoast::cost()
{
	return 0.99;
}

std::string Decaf::description()
{
	return "A (" + _sizeStrings[_size] + " sized) " + "coffee alternative with low caffeine.";
}

double Decaf::cost()
{
	return 1.05;
}

std::string HouseBlend::description()
{
	return "A (" + _sizeStrings[_size] + " sized) " + "medium roast coffee blend.";
}

double HouseBlend::cost()
{
	return 0.89;
}
