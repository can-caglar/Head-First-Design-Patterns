#include "Tea.h"
#include <iostream>

void Tea::brew()
{
	std::cout << "Adding tea-leaves to boiling water" << std::endl;
}

void Tea::addCondements()
{
	std::cout << "Adding lemon to the tea" << std::endl;
}

bool Tea::wantsCondements()
{
	bool wants = true;
	char input;
	std::cout << "Would you like lemon in your tea? (y/n)" << std::endl;
	std::cin >> input;
	if (input == 'y')
	{
		wants = true;
	}
	else
	{
		wants = false;
	}
	return wants;
}

