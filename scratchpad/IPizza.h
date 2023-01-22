#pragma once

#include <string>
#include <vector>
#include "IngredientsFactory.h"

class IPizza
{
public:
	IPizza(IIngredientsFactory* factory) 
		: _ingredientFactory(factory)
		, _name("")
		, _dough(nullptr)
		, _base(nullptr) 
		, _cheese(nullptr) {};
	virtual ~IPizza() = 0;
	virtual void prepare() = 0;
	void bake();
	void slice();
	void box();
	std::string getName();
protected:
	IIngredientsFactory* _ingredientFactory;
	std::string _name;
	IDough* _dough;
	IBase* _base;
	ICheese* _cheese;
};

class NyCheesePizza : public IPizza
{
public:
	NyCheesePizza(IIngredientsFactory* factory) : IPizza(factory)
	{
		_name = "NY style cheese Pizza";
	}
	void prepare() override;
};

class ChicagoCheesePizza : public IPizza
{
public:
	ChicagoCheesePizza(IIngredientsFactory* factory) : IPizza(factory)
	{
		_name = "Chicago style cheese Pizza";
	}
	void prepare() override;
};