#include "PizzaStore.h"
#include "IPizza.h"
#include <iostream>

void PizzaStore::order(std::string pizzaName)
{
	IPizza* pizza;

	// Initial, bad implementation. 
	// The pizza creation can change, so 
	// we have to encapsulate.
	if (pizzaName == "four cheese")
	{
		pizza = new FourCheesePizza();
	}
	else if (pizzaName == "pepperoni")
	{
		pizza = new PepperoniPizza();
	}
	else
	{
		std::cout << "Unknown pizza requested." << std::endl;
		return;
	}

	pizza->prepare();
	pizza->bake();
	pizza->slice();
	pizza->box();
}
