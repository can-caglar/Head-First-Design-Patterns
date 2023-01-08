#include "DuckBehaviours.h"
#include <iostream>

extern void printToConsole(const char* str);

void FlyWithWings::fly() const
{
	printToConsole("*whoosh* I'm flying!");
}

void FlyNoWay::fly() const
{
	printToConsole("Sits doing nothing.");
}

void Quack::quack() const
{
	printToConsole("Quack, quack!");
}

void QuackSqueek::quack() const
{
	printToConsole("Squeek, squeek!");
}

void QuackStaySilent::quack() const
{
	printToConsole("...");
}
