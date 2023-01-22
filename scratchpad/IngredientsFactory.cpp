#include "IngredientsFactory.h"

IDough* ChicagoPizzaIngredientFactory::getDough()
{
	return new DoughThickCrust();
}

IBase* ChicagoPizzaIngredientFactory::getBase()
{
	return new BaseQualityTomato();
}

ICheese* ChicagoPizzaIngredientFactory::getCheese()
{
	return new CheeseMozarella();
}

IDough* NYPizzaIngredientFactory::getDough()
{
	return new DoughThickCrust();
}

IBase* NYPizzaIngredientFactory::getBase()
{
	return new BasePlumTomato();
}

ICheese* NYPizzaIngredientFactory::getCheese()
{
	return new CheeseParmesan();;
}
