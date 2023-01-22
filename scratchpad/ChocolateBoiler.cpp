#include "ChocolateBoiler.h"

void ChocolateBoiler::fill()
{
	if (_empty)
	{
		std::cout << "Filling up the chocolate boiler." << std::endl;
		_empty = false;
	}
	else
	{
		std::cout << "Cannot fill, boiler is full" << std::endl;
	}
}

void ChocolateBoiler::boil()
{
	if (!_empty)
	{
		std::cout << "Boiling away...." << std::endl;
		_boiled = true;
	}
	else
	{
		std::cout << "Cannot boil an empty boiler" << std::endl;
	}
}

void ChocolateBoiler::drain()
{
	if (!_empty)
	{
		std::cout << "Draining chocolate!" << std::endl;
		_empty = true;
		_boiled = false;
	}
	else
	{
		std::cout << "Tried draining an empty boiler." << std::endl;
	}
}
