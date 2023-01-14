#pragma once

class Beverage
{
public:
	virtual void description() = 0;
	virtual double cost() = 0;
};

class HouseBlend : public Beverage
{
public:
	virtual void description() override;
	virtual double cost() override;
};

class DarkRoast : public Beverage
{
public:
	virtual void description() override;
	virtual double cost() override;
};

class Decaf : public Beverage
{
	virtual void description() override;
	virtual double cost() override;
};
