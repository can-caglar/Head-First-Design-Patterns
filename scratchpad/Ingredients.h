#pragma once
#include <string>

// Create the "quality" ingredients
// that the "franchise" wants to use

// Lot's of common code here but this is just 
// for the example. Imagine each IDough, IBase
// are totally different classes.

class IDough
{
public:
	std::string getName()
	{
		return _name;
	}
protected:
	std::string _name;
};

class IBase
{
public:
	std::string getName()
	{
		return _name;
	}
protected:
	std::string _name;
};

class ICheese
{
public:
	std::string getName()
	{
		return _name;
	}
protected:
	std::string _name;
};

class DoughThinCrust : public IDough
{
public:
	DoughThinCrust()
	{
		_name = "Thin Crust Dough";
	}
};

class DoughThickCrust : public IDough
{
public:
	DoughThickCrust()
	{
		_name = "Thick Crust Dough";
	}
};

class BaseQualityTomato : public IBase
{
public:
	BaseQualityTomato()
	{
		_name = "Quality Tomato";
	}
};

class BasePlumTomato : public IBase
{
public:
	BasePlumTomato()
	{
		_name = "Plum Tomato";
	}
};

class CheeseParmesan : public ICheese
{
public:
	CheeseParmesan()
	{
		_name = "Parmesan Cheese";
	}
};

class CheeseMozarella : public ICheese
{
public:
	CheeseMozarella()
	{
		_name = "Mozarella";
	}
};
