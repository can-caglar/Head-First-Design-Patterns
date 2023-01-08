#include "SimUDuck.h"
#include <iostream>

/* 
*/
static void printToConsole(const char* str)
{
	std::cout << str << std::endl;
}

/* Duck */

void Duck::quack() const
{
	printToConsole("Quack!");
}

void Duck::display() const
{
	printToConsole("Look, I'm a duck!");
}

void Duck::swim() const
{
	printToConsole("Swim, swim, swim.");
}

void Duck::fly() const
{
	printToConsole("*flies* whooshh");
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
