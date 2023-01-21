#pragma once

#include <string>

class IPizza;	// forward decl

class IPizzaStore
{
public:
	void order(std::string pizza);	// all franchises must adhere to this
protected:
	// franchises can make their own style of pizza
	virtual IPizza* createPizza(std::string pizza) = 0;
};

class NYStylePizzaStore : public IPizzaStore
{
public:
	// Inherited via IPizzaStore
	IPizza* createPizza(std::string pizzaName) override;
};

class ChicagoStylePizzaStore : public IPizzaStore
{
public:
	// Inherited via IPizzaStore
	IPizza* createPizza(std::string pizzaName) override;
};
