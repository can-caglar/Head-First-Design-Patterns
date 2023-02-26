#include "Brew.h"
#include <iostream>

void Brew::prepare()
{
	pourBoilingWater();
	brew();
	pourInCup();
	if (wantsCondements())
	{
		addCondements();
	}
	std::cout << "Here's your hot brew!" << std::endl;
}

void Brew::pourBoilingWater()
{
	std::cout << "Pouring boiling water ..." << std::endl;
}

void Brew::pourInCup()
{
	std::cout << "Pouring brew in water." << std::endl;
}

bool Brew::wantsCondements()
{
	return true;
}
