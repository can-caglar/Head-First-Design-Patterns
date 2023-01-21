#include "IPizza.h"
#include <iostream>

void PepperoniPizza::prepare()
{
	std::cout << "Preparing Pepperoni pizza." << std::endl;
}

void PepperoniPizza::bake()
{
	std::cout << "Baking Pepperoni pizza." << std::endl;
}

void PepperoniPizza::slice()
{
	std::cout << "Slicing Pepperoni pizza." << std::endl;
}

void PepperoniPizza::box()
{
	std::cout << "Boxing the Pepperoni pizza." << std::endl;
}

void FourCheesePizza::prepare()
{
	std::cout << "Preparing FourCheese pizza." << std::endl;
}

void FourCheesePizza::bake()
{
	std::cout << "Baking FourCheese pizza." << std::endl;
}

void FourCheesePizza::slice()
{
	std::cout << "Slicing FourCheese pizza." << std::endl;
}

void FourCheesePizza::box()
{
	std::cout << "Boxing the FourCheese pizza." << std::endl;
}
