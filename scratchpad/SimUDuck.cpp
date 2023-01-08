#include "SimUDuck.h"
#include <iostream>
#include <memory>

extern void printToConsole(const char* str);

/* Duck */

Duck::Duck(std::unique_ptr<IQuackBehaviour> howToQuack, std::unique_ptr<IFlyBehaviour> howToFly)
{
	_quackBehaviour = std::move(howToQuack);
	_flyBehaviour = std::move(howToFly);
}

void Duck::display() const
{
	printToConsole("Look, I'm a duck!");
}

void Duck::fly() const
{
	_flyBehaviour->fly();
}

void Duck::quack() const
{
	_quackBehaviour->quack();
}

void Duck::swim() const
{
	printToConsole("*Floats in the water*");
}

/* Mallard duck */

void MallardDuck::display() const
{
	printToConsole("I look like a Mallard");
}

void RubberDuck::display() const
{
	printToConsole("I look like a Rubber duck!");
}

void ReadheadDuck::display() const
{
	printToConsole("I look like a Readhead duck!");
}

void WoodenDuck::display() const
{
	printToConsole("I look like a Wooden duck!");
}
