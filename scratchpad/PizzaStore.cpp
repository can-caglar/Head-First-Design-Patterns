#include "PizzaStore.h"
#include "IPizza.h"
#include "IngredientsFactory.h"
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
	if (pizza)
	{
		pizza->prepare();
		pizza->bake();
		pizza->slice();
		pizza->box();
	}
}

IPizza* NYStylePizzaStore::createPizza(std::string pizzaName)
{
	IPizza* pizza = nullptr;
	IIngredientsFactory* nyIngredientFactory = new NYPizzaIngredientFactory();

	if (pizzaName == "four cheese")
	{
		pizza = new NyCheesePizza(nyIngredientFactory);
	}
	//else if (pizzaName == "pepperoni")
	//{
	//	 pizza = new NyStylePepperoni();	// if we had implemented it
	//}
	else
	{
		std::cout << "Unknown pizza requested." << std::endl;
	}
	return pizza;
}

IPizza* ChicagoStylePizzaStore::createPizza(std::string pizzaName)
{
	IPizza* pizza = nullptr;
	IIngredientsFactory* chicagoIngredientFactory = new ChicagoPizzaIngredientFactory();
	if (pizzaName == "four cheese")
	{
		pizza = new ChicagoCheesePizza(chicagoIngredientFactory);
	}
	//else if (pizzaName == "pepperoni")
	//{
	//	// pizza = new ChicagoStylePepperoni();  // if we had implemented it
	//}
	else
	{
		std::cout << "Unknown pizza requested." << std::endl;
	}
	return pizza;
}
