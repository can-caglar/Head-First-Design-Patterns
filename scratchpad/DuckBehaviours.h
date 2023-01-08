#pragma once

/* Fly Behaviours */

class IFlyBehaviour
{
public:
	virtual void fly() const = 0;
};

class FlyWithWings : public IFlyBehaviour
{
public:
	void fly() const override;
};

class FlyNoWay : public IFlyBehaviour
{
public:
	void fly() const override;
};

/* Quack Behaviours */

class IQuackBehaviour
{
public:
	virtual void quack() const = 0;
};

class Quack : public IQuackBehaviour
{
public:
	virtual void quack() const;
};

class QuackSqueek : public IQuackBehaviour
{
public:
	virtual void quack() const;
};

class QuackStaySilent : public IQuackBehaviour
{
public:
	virtual void quack() const;
};