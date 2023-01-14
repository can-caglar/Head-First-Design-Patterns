#pragma once

#include <string>

class Beverage
{
public:
	virtual std::string description() = 0;
	virtual double cost() = 0;
};

class HouseBlend : public Beverage
{
public:
	std::string description() override;
	virtual double cost() override;
};

class DarkRoast : public Beverage
{
public:
	std::string description() override;
	virtual double cost() override;
};

class Decaf : public Beverage
{
	std::string description() override;
	virtual double cost() override;
};
