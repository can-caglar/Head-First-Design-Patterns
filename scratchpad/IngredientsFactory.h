#pragma once
#include "Ingredients.h"

class IIngredientsFactory
{
public:
	// The abstract factory
	virtual IDough* getDough() = 0;
	virtual IBase* getBase() = 0;
	virtual ICheese* getCheese() = 0;
};

class ChicagoPizzaIngredientFactory : public IIngredientsFactory
{
public:
	IDough* getDough() override;
	IBase* getBase() override;
	ICheese* getCheese() override;
};

class NYPizzaIngredientFactory : public IIngredientsFactory
{
public:
	IDough* getDough() override;
	IBase* getBase() override;
	ICheese* getCheese() override;
};