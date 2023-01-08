#pragma once

class Duck
{
public:
	void quack() const;
	void swim() const;
	void fly() const;
	virtual void display() const;
};

class MallardDuck : public Duck
{
public:
	void display() const override;
};

class ReadheadDuck : public Duck
{
public:
	void display() const override;
};

class RubberDuck : public Duck
{
public:
	void display() const override;
};