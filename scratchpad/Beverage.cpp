#include "Beverage.h"

std::string DarkRoast::description()
{
	return "A strong, bold coffee that is roasted for longer.";
}

double DarkRoast::cost()
{
	return 0.99;
}

std::string Decaf::description()
{
	return "A coffee alternative with low caffeine.";
}

double Decaf::cost()
{
	return 1.05;
}

std::string HouseBlend::description()
{
	return "A medium roast coffee blend.";
}

double HouseBlend::cost()
{
	return 0.89;
}
