#pragma once

class Duck
{
public:
	void quack();
	void swim();
	void fly();
	virtual void display();
};

class MallardDuck : public Duck
{
public:
	void display() override;
};

class ReadheadDuck : public Duck
{
public:
	void display() override;
};

class RubberDuck : public Duck
{
public:
	void display() override;
};