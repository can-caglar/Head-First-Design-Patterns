#include "Waitress.h"
#include "MenuItem.h"
#include <iostream>

void Waitress::printMenu()
{
	IIterator* iter = m_menu->createIterator();
	int counter = 0;
	while (iter->hasNext())
	{
		MenuItem* item = iter->getItem();
		std::cout << "Menu item " << counter 
			<< ": " << item->getName() << std::endl;
		std::cout << "Here's how I would describe it... " << item->description();
		std::cout << std::endl;
		iter->next();
		counter++;
	}
}

void Waitress::changeMenu(IMenu* menu)
{
	m_menu = menu;
}
