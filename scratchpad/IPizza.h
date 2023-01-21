#pragma once

class IPizza
{
public:
	virtual void prepare() = 0;
	virtual void bake() = 0;
	virtual void slice() = 0;
	virtual void box() = 0;
};

class PepperoniPizza : public IPizza
{
public:
	// Inherited via IPizza
	void prepare() override;
	void bake() override;
	void slice() override;
	void box() override;
};

class FourCheesePizza : public IPizza
{
public:
	// Inherited via IPizza
	void prepare() override;
	void bake() override;
	void slice() override;
	void box() override;
};

class NyStyleFourCheesePizza : public IPizza
{
public:
	// Inherited via IPizza
	virtual void prepare() override;
	virtual void bake() override;
	virtual void slice() override;
	virtual void box() override;
};

class NyStylePepperoni : public IPizza
{
public:
	// Inherited via IPizza
	virtual void prepare() override;
	virtual void bake() override;
	virtual void slice() override;
	virtual void box() override;
};

class ChicagoStyleFourCheesePizza : public IPizza
{
public:
	// Inherited via IPizza
	virtual void prepare() override;
	virtual void bake() override;
	virtual void slice() override;
	virtual void box() override;
};

class ChicagoStylePepperoni : public IPizza
{
public:
	// Inherited via IPizza
	virtual void prepare() override;
	virtual void bake() override;
	virtual void slice() override;
	virtual void box() override;
};

