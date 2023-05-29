#include "DinerMenu.h"
#include "IIterator.h"

IIterator* DinerMenu::createIterator()
{
	return new DinerMenuIterator(&m_menuItems);
}
