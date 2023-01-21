
#include <iostream>
#include <vector>
#include <memory>

// Strategy pattern includes
#include "SimUDuck.h"
#include "DuckCall.h"

// Observer pattern includes
#include "WeatherData.h"
#include "Display.h"

// Decorator pattern includes
#include "Beverage.h"
#include "Condements.h"

// Factory pattern includes
#include "PizzaStore.h"

// Helper functions
void printToConsole(const char* str);

// Example runner functions
static void strategyPatternExample();
static void observerPatternExample();
static void decoratorPatternExample();
static void factoryPatternExample();

int main(void)
{
	std::cout << "Application started.\n\n";

	strategyPatternExample();
	observerPatternExample();
	decoratorPatternExample();
	factoryPatternExample();
}

// Helper functions
void printToConsole(const char* str)
{
	std::cout << str << std::endl;
}

// Private functions

/*
The Strategy Pattern defines a family of algorithms,
encapsulates each one, and makes them interchangeable.
Strategy lets the algorithm vary independently from
clients that use it.
*/
static void strategyPatternExample()
{
	std::vector<std::shared_ptr<Duck>> ducks;

	ducks.push_back(std::make_unique<Duck>(std::make_unique<Quack>(), std::make_unique<FlyWithWings>()));
	ducks.push_back(std::make_unique<MallardDuck>(std::make_unique<Quack>(), std::make_unique<FlyWithWings>()));
	ducks.push_back(std::make_unique<ReadheadDuck>(std::make_unique<Quack>(), std::make_unique<FlyWithWings>()));
	ducks.push_back(std::make_unique<RubberDuck>(std::make_unique<QuackSqueek>(), std::make_unique<FlyNoWay>()));
	ducks.push_back(std::make_unique<WoodenDuck>(std::make_unique<QuackStaySilent>(), std::make_unique<FlyNoWay>()));

	for (std::shared_ptr<Duck> duck : ducks)
	{
		duck->display();
		duck->fly();
		duck->quack();
		printToConsole("\n");
	}

	// Making a "duck call" hunter's device
	DuckCall huntersDuckCall;
	huntersDuckCall.mimic();
}

/* 
The Observer Pattern defines a one - to - many
dependency between objects so that when one
object changes state, all of its dependents are
notified and updated automatically.
*/
static void observerPatternExample()
{
	WeatherData* weatherData = new WeatherData();

	IDisplay* displayCurrentConditions = new DisplayCurrentConditions(weatherData);
	IDisplay* displaySimpleForecast = new DisplaySimpleForecast(weatherData);
	IDisplay* displayWeatherStats = new DisplayWeatherStats(weatherData);

	IDisplay* fakeHeatIndex = new DisplayHeatIndex(weatherData);	// "retrofitted"
	IDisplay* displayWindSpeed = new DisplayWindSpeed(weatherData);  // also retrofitted, but also needs a new param

	weatherData->setMeasurements(10, 0.4f, 2.0f, 30);
	weatherData->setMeasurements(13, 1, 2.0f, 30);
	weatherData->setMeasurements(12, 0.4f, 1.7f, 30);
	weatherData->setMeasurements(12, 0.9f, 2.1f, 30);
}

/*
The Decorator Pattern attaches additional 
responsibilities to an object dynamically.
Decorators provide a flexible alternative 
to subclassing for extending functionality.
*/
static void decoratorPatternExample()
{
	// "I'd like to order a "venti" house blend with steamed milk and mocha please!"

	// Prepare drink
	Beverage* houseBlend = new HouseBlend();
	houseBlend->setSize(Beverage::VENTI);

	// Add condements
	Beverage* coffeeWithSteamedMilk = new SteamedMilk(houseBlend);
	Beverage* coffeeWithSteamedMilkAndMocha = new Mocha(coffeeWithSteamedMilk);

	// View indivisual layers
	std::cout << houseBlend->description() << " Cost: " << houseBlend->cost() << std::endl;
	std::cout << coffeeWithSteamedMilk->description() << " Cost: " << coffeeWithSteamedMilk->cost() << std::endl;
	std::cout << coffeeWithSteamedMilkAndMocha->description() 
		<< " Cost: " << coffeeWithSteamedMilkAndMocha->cost() << std::endl;
}

/*
The Factory Method Pattern defines an interface
for creating an object, but lets subclasses decide which
class to instantiate. Factory Method lets a class defer
instantiation to subclasses.
*/
static void factoryPatternExample()
{
	// Create program for a pizza franchise
	// Franchises can make different style
	// of pizza, but their ordering process
	// has to be uniform.

	// Ensure all franchises are using the
	// same ingredients!
	std::cout << "\n\n~~~Factory pattern example~~~\n" << std::endl;

	IPizzaStore* chicagoStyleStore = new ChicagoStylePizzaStore();
	IPizzaStore* nyStyleStore = new NYStylePizzaStore();

	std::cout << "Ordering all pizzas from the Chicago style store" << std::endl;
	chicagoStyleStore->order("four cheese");
	chicagoStyleStore->order("pepperoni");

	std::cout << std::endl;

	std::cout << "Ordering all pizzas from the NY style store" << std::endl;
	nyStyleStore->order("four cheese");
	nyStyleStore->order("pepperoni");
}