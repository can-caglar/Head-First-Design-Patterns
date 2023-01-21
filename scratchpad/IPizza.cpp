#include "IPizza.h"
#include <iostream>

void IPizza::prepare()
{
	std::cout << std::endl;
	std::cout << "Preparing " << _name << std::endl;
	std::cout << "Kneeding the " << _dough << " dough" << std::endl;
	std::cout << "Applying " << _base << " base" << std::endl;
	std::cout << "Sprinkling " << _cheese << " on top." << std::endl;
	std::cout << "Adding toppings: ";
	for (const std::string& topping : _toppings)
	{
		std::cout << topping << " ";
	}
	std::cout << std::endl;
}

void IPizza::bake()
{
	std::cout << "Baking at 200C for 20 minutes" << std::endl;
}

void IPizza::slice()
{
	std::cout << "Cutting pizza into slices." << std::endl;
}

void IPizza::box()
{
	std::cout << "Boxing the pizza." << std::endl;
}
