#include "Coffee.h"
#include <iostream>

void Coffee::brew()
{
    std::cout << "Adding coffee beans to boiling water.." << std::endl;
}

bool Coffee::wantsCondements()
{
    bool wants = false;
    char input;
    std::cout << "Would you like milk and sugar with your coffee? (y/n)" << std::endl;
    std::cin >> input;
    if (input == 'y')
    {
        wants = true;
    }
    return wants;
}

void Coffee::addCondements()
{
    std::cout << "Adding milk and sugar to the coffee" << std::endl;
}
