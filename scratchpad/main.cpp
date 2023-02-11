
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

// Singleton pattern includes
#include "ChocolateBoiler.h"

// Command pattern includes
#include "Command.h"
#include "Receiver.h"
#include "Invoker.h"

// Helper functions
void printToConsole(const char* str);

// Example runner functions
static void strategyPatternExample();
static void observerPatternExample();
static void decoratorPatternExample();
static void factoryPatternExample();
static void singletonPatternExample();
static void commandPattern();

int main(void)
{
	std::cout << "Application started.\n\n";

	strategyPatternExample();
	observerPatternExample();
	decoratorPatternExample();
	factoryPatternExample();
	singletonPatternExample();
	commandPattern();
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

/*
Ensure a class has only one instance and provide
a global point of access to it.
*/
static void singletonPatternExample()
{
	std::cout << std::endl << "Singleton Pattern Example" << std::endl;
	ChocolateBoiler* chocoBoiler = ChocolateBoiler::getInstance();
	ChocolateBoiler* chocoBoilerAnotherVariable = ChocolateBoiler::getInstance();

	chocoBoiler->fill();
	chocoBoilerAnotherVariable->fill(); // shouldn't allow us to fill

	chocoBoiler->boil();
	chocoBoiler->drain();

	chocoBoilerAnotherVariable->fill();	// shall allow us to boil
}

/*
The Command Pattern encapsulates a request as an
object, thereby letting you parameterize other objects
with different requests, queue or log requests, and
support undoable operations.
*/
static void commandPattern()
{
	std::cout << std::endl << "Starting Command Pattern Example" << std::endl;

	GarageDoor* garageDoor = new GarageDoor();
	CeilingFan* ceilingFan = new CeilingFan();

	CommandGarageLightOn* garageLightOn = new CommandGarageLightOn(garageDoor);
	CommandGarageLightOff* garageLightOff = new CommandGarageLightOff(garageDoor);

	CommandCeilingFanHigh* fanHigh = new CommandCeilingFanHigh(ceilingFan);
	CommandCeilingFanMedium* fanMedium = new CommandCeilingFanMedium(ceilingFan);
	CommandCeilingFanLow* fanLow = new CommandCeilingFanLow(ceilingFan);
	CommandCeilingFanOff* fanOff = new CommandCeilingFanOff(ceilingFan);

	RemoteControl remoteControl;
	remoteControl.setCommand(garageLightOn, garageLightOff, 0);
	remoteControl.setCommand(fanHigh, fanOff, 1);
	remoteControl.setCommand(fanMedium, fanOff, 2);
	remoteControl.setCommand(fanLow, fanOff, 3);
	
	remoteControl.buttonPressOn(1);
	remoteControl.buttonPressOn(3);
	remoteControl.buttonPressUndo();
	remoteControl.buttonPressOff(0);

	std::cout << "Executing \"enter garage routine\"" << std::endl;
	std::vector<Command*> enterGarageCommands;
	enterGarageCommands.push_back(fanHigh);
	enterGarageCommands.push_back(garageLightOn);

	std::vector<Command*> leaveGarage;
	leaveGarage.push_back(fanOff);
	leaveGarage.push_back(garageLightOff);

	MacroCommand* cmdEnterGarage = new MacroCommand(enterGarageCommands);
	MacroCommand* cmdLeaveGarage = new MacroCommand(leaveGarage);

	remoteControl.setCommand(cmdEnterGarage, cmdLeaveGarage, 4);

	remoteControl.buttonPressOn(4);
	remoteControl.buttonPressUndo();
	remoteControl.buttonPressOff(4);
	remoteControl.buttonPressOff(4);
	remoteControl.buttonPressUndo();

}
