#pragma once

#include <string>
#include <array>

class Beverage
{
public:
	Beverage()
		: _size(Size::TALL)
		, _sizeStrings{ "tall", "grande", "venti" } {};
	virtual std::string description() = 0;
	virtual double cost() = 0;

	// Introducting sizes to the menu
	// Condements shall be charged according to size
	// e.g. soy 0.1, 0.15, 0.20 for tall, grande, venti resp.
	enum Size
	{
		TALL,		// small
		GRANDE,		// medium
		VENTI,		// large
		SIZE_COUNT,
	};
	void setSize(Size newSize);
	virtual Size getSize();
protected:
	Size _size;
	const std::array<std::string, SIZE_COUNT> _sizeStrings;
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
