#pragma once

#include "DuckBehaviours.h"
#include <memory>

class Duck
{
public:
	void swim() const;
	virtual void display() const;
	void fly() const;
	void quack() const;

	Duck() = delete;
	Duck(std::unique_ptr<IQuackBehaviour> howToQuack, std::unique_ptr<IFlyBehaviour> howToFly);

private:
	std::unique_ptr<IQuackBehaviour> _quackBehaviour;
	std::unique_ptr<IFlyBehaviour> _flyBehaviour;
};

class MallardDuck : public Duck
{
public:
	MallardDuck(std::unique_ptr<IQuackBehaviour> howToQuack, std::unique_ptr<IFlyBehaviour> howToFly) :
		Duck(std::move(howToQuack), std::move(howToFly)) {};
	void display() const override;
};

class ReadheadDuck : public Duck
{
public:
	ReadheadDuck(std::unique_ptr<IQuackBehaviour> howToQuack, std::unique_ptr<IFlyBehaviour> howToFly) :
		Duck(std::move(howToQuack), std::move(howToFly)) {};
	void display() const override;
};

class RubberDuck : public Duck
{
public:
	RubberDuck(std::unique_ptr<IQuackBehaviour> howToQuack, std::unique_ptr<IFlyBehaviour> howToFly) :
		Duck(std::move(howToQuack), std::move(howToFly)) {};
	void display() const override;
};

class WoodenDuck : public Duck
{
public:
	WoodenDuck(std::unique_ptr<IQuackBehaviour> howToQuack, std::unique_ptr<IFlyBehaviour> howToFly) :
		Duck(std::move(howToQuack), std::move(howToFly)) {};
	void display() const override;
};
