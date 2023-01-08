#include <iostream>
#include <vector>
#include "SimUDuck.h"

int main(void)
{
	std::cout << "Application started.\n\n";

	std::vector<std::shared_ptr<Duck>> ducks;
	
	ducks.push_back(std::make_unique<Duck>());
	ducks.push_back(std::make_unique<MallardDuck>());
	ducks.push_back(std::make_unique<ReadheadDuck>());
	ducks.push_back(std::make_unique<RubberDuck>());

	for (std::shared_ptr<Duck> duck : ducks)
	{
		duck->display();
		duck->fly(); // rubber ducks flying
	}
}