#pragma once

#include <string>
#include <vector>

class IPizza
{
public:
	void prepare();
	void bake();
	void slice();
	void box();
protected:
	IPizza() {};	// this class is not meant to be instantiated
	std::string _name;
	std::string _dough;
	std::string _base;
	std::string _cheese;
	std::vector<std::string> _toppings;
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
		_toppings.push_back("gorgonzola");
		_toppings.push_back("mozarella");
		_toppings.push_back("feta");
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
		_toppings.push_back("pepperoni");
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
		_toppings.push_back("chicago mozarella");
		_toppings.push_back("feta");
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
		_toppings.push_back("pepperoni");
	}
};
