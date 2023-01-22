#pragma once
#include <string>

// Create the "quality" ingredients
// that the "franchise" wants to use

class IIngredient
{
public:
	std::string getName()
	{
		return _name;
	}
protected:
	std::string _name;
};

class DoughThinCrust : public IIngredient
{
public:
	DoughThinCrust()
	{
		_name = "Thin Crust Dough";
	}
};

class DoughThickCrust : public IIngredient
{
public:
	DoughThickCrust()
	{
		_name = "Thick Crust Dough";
	}
};

class BaseQualityTomato : public IIngredient
{
public:
	BaseQualityTomato()
	{
		_name = "Quality Tomato";
	}
};

class BasePlumTomato : public IIngredient
{
public:
	BasePlumTomato()
	{
		_name = "Plum Tomato";
	}
};

class CheeseParmesan : public IIngredient
{
public:
	CheeseParmesan()
	{
		_name = "Parmesan Cheese";
	}
};

class CheeseMozarella : public IIngredient
{
public:
	CheeseMozarella()
	{
		_name = "Mozarella";
	}
};
