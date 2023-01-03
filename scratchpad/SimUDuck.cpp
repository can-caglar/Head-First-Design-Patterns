#include "SimUDuck.h"
#include <iostream>

/* 
*/
static void printToConsole(const char* str)
{
	std::cout << str << std::endl;
}

/* Duck */

void Duck::quack()
{
	printToConsole("Quack!");
}

void Duck::display()
{
	printToConsole("Look, I'm a duck!");
}

void Duck::swim()
{
	printToConsole("Swim, swim, swim.");
}

void Duck::fly()
{
	printToConsole("*flies* whooshh");
}

/* Mallard duck */

void MallardDuck::display()
{
	printToConsole("I look like a Mallard");
}

void RubberDuck::display()
{
	printToConsole("I look like a Rubber duck!");
}

void ReadheadDuck::display()
{
	printToConsole("I look like a Readhead duck!");
}
