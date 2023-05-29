#include "PancakeHouseMenu.h"

IIterator* PancakeHouseMenu::createIterator()
{
	return new PancakeHouseIterator(&m_menuItems);
}
