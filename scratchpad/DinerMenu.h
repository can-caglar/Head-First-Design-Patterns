#pragma once

#include "IMenu.h"
#include "MenuItem.h"
#include <array>

class DinerMenu : public IMenu
{
public:
	DinerMenu()
	{
		m_menuItems[0] = MenuItem("Burger", "Tasty", 3.0, false);
		m_menuItems[1] = MenuItem("Milkshake", "Refreshing.", 2.0, false);
		m_menuItems[2] = MenuItem("Fries", "Crispy and golden.", 1.0, false);
		m_menuItems[3] = MenuItem("Baked Beans", "In tomato sauce.", 1.50, false);
	}
	IIterator* createIterator() override;
private:
	std::array<MenuItem, 4> m_menuItems;
};
