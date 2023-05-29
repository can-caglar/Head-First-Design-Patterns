#pragma once

#include "IMenu.h"
#include <vector>
#include "MenuItem.h"

class PancakeHouseMenu : public IMenu
{
public:
	PancakeHouseMenu()
	{
		m_menuItems.push_back(MenuItem("Pancake", "Filling", 5.0, true));
		m_menuItems.push_back(MenuItem("Milkshake", "Cooling", 3.0, true));
		m_menuItems.push_back(MenuItem("Chocolate cake", "Indulgent", 2.5, true));
	}
	IIterator* createIterator() override;
private:
	std::vector<MenuItem> m_menuItems;
};
