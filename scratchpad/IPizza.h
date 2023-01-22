#pragma once

#include <string>
#include <vector>
#include "Ingredients.h"

class IPizza
{
public:
	void prepare();
	void bake();
	void slice();
	void box();
protected:
	std::string _name;
	std::string _dough;
	std::string _base;
	std::string _cheese;
};

class NyStyleFourCheesePizza : public IPizza
{
public:
	NyStyleFourCheesePizza()
	{
		_name = "NY Style 4-Cheese Pizza";
		_dough = "normal";
		_base = "none";
		_cheese = "parmesan";
	}
};

class NyStylePepperoni : public IPizza
{
public:
	NyStylePepperoni()
	{
		_name = "NY Style Pepperoni Pizza";
		_dough = "sour";
		_base = "tomato";
		_cheese = "mozarella";
	}
};

class ChicagoStyleFourCheesePizza : public IPizza
{
public:
	ChicagoStyleFourCheesePizza()
	{
		_name = "Chicago Style 4-Cheese Pizza";
		_dough = "normal";
		_base = "chicago tomato";
		_cheese = "chicago mozarella";
	}
};

class ChicagoStylePepperoni : public IPizza
{
public:
	ChicagoStylePepperoni()
	{
		_name = "Chicago Style Pepperoni Pizza";
		_dough = "chicago normal";
		_base = "chicago tomato";
		_cheese = "chicago mozarella";
	}
};

class CheapNYPizza : public IPizza
{
public:
	CheapNYPizza()
	{
		_name = "Cheap NY Pizza";
		_dough = "cheap dough";
		_base = "cheap tomato";
		_cheese = "cheap cheese";
	}
};