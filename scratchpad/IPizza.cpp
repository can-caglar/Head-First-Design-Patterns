#include "IPizza.h"
#include <iostream>

IPizza::~IPizza()
{
	delete _ingredientFactory;
};

void ChicagoCheesePizza::prepare()
{
	_dough = _ingredientFactory->getDough();
	_base = _ingredientFactory->getBase();
	_cheese = _ingredientFactory->getCheese();

	std::cout << std::endl;
	std::cout << "Preparing a " << _name << std::endl;
	std::cout << "Kneeding the " << _dough->getName() << " dough" << std::endl;
	std::cout << "Applying " << _base->getName() << " base" << std::endl;
	std::cout << "Sprinkling " << _cheese->getName() << " on top." << std::endl;

	delete _dough;
	delete _base;
	delete _cheese;
}

void NyCheesePizza::prepare()
{
	_dough = _ingredientFactory->getDough();
	// _base = _ingredientFactory->getBase(); // imagine this doesn't need a base
	// just so the function is different and it makes sense to override
	_cheese = _ingredientFactory->getCheese();

	std::cout << std::endl;
	std::cout << "Preparing a " << _name << std::endl;
	std::cout << "Skipping the base!" << std::endl;
	std::cout << "Kneeding the " << _dough->getName() << " dough" << std::endl;
	std::cout << "Sprinkling " << _cheese->getName() << " on top." << std::endl;

	delete _dough;
	delete _cheese;
}

void IPizza::prepare()
{

}

void IPizza::bake()
{
	std::cout << "Baking at 200C for 20 minutes" << std::endl;
}

void IPizza::slice()
{
	std::cout << "Cutting pizza into slices." << std::endl;
}

void IPizza::box()
{
	std::cout << "Boxing the pizza." << std::endl;
}

std::string IPizza::getName()
{
	return _name;
}
