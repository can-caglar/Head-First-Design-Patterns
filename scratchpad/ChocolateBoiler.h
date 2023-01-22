#pragma once
#include <iostream>

class ChocolateBoiler
{
public:
	static ChocolateBoiler* getInstance()
	{
		static ChocolateBoiler* instance = new ChocolateBoiler;
		return instance;
	}
	void fill();
	void boil();
	void drain();
private:
	ChocolateBoiler()
		: _empty(true), _boiled(false) 
	{
		std::cout << "Creating Chocolate Boiler instance." << std::endl;
	};
	bool _empty;
	bool _boiled;
};
