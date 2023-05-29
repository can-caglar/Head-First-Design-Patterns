#pragma once

#include "IMenu.h"

class Waitress
{
public:
	Waitress(IMenu* menu) : m_menu(menu) {};
	void printMenu();
	void changeMenu(IMenu* menu);
private:
	IMenu* m_menu;
};

