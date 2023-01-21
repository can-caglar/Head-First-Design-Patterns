#include "PizzaStore.h"
#include "IPizza.h"
#include <iostream>

void IPizzaStore::order(std::string pizzaName)
{
	// encapsulated the creation of pizza
	// in a method. Leaving the "decision"
	// of which pizza to make, to the
	// derived subclasses, or technically,
	// to the client, who decides which 
	// concrete subclass to instantiate.
	IPizza* pizza = createPizza(pizzaName);

	// The preparation technique 
	// is uniform for all "franchises".
	pizza->prepare();
	pizza->bake();
	pizza->slice();
	pizza->box();
}

IPizza* NYStylePizzaStore::createPizza(std::string pizzaName)
{
	IPizza* pizza = nullptr;
	if (pizzaName == "four cheese")
	{
		pizza = new NyStyleFourCheesePizza();
	}
	else if (pizzaName == "pepperoni")
	{
		pizza = new NyStylePepperoni();
	}
	else
	{
		std::cout << "Unknown pizza requested." << std::endl;
	}
	return pizza;
}

IPizza* ChicagoStylePizzaStore::createPizza(std::string pizzaName)
{
	IPizza* pizza = nullptr;
	if (pizzaName == "four cheese")
	{
		pizza = new ChicagoStyleFourCheesePizza();
	}
	else if (pizzaName == "pepperoni")
	{
		pizza = new ChicagoStylePepperoni();
	}
	else
	{
		std::cout << "Unknown pizza requested." << std::endl;
	}
	return pizza;
}
