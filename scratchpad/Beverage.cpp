#include "Beverage.h"
#include <iostream>

void DarkRoast::description()
{
	std::cout << "A strong, bold coffee that is roasted for longer." << std::endl;
}

double DarkRoast::cost()
{
	return 0.99;
}

void Decaf::description()
{
	std::cout << "A coffee alternative with low caffeine." << std::endl;
}

double Decaf::cost()
{
	return 1.05;
}

void HouseBlend::description()
{
	std::cout << "A medium roast coffee blend." << std::endl;
}

double HouseBlend::cost()
{
	return 0.89;
}
