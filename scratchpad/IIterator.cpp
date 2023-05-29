#include "IIterator.h"

bool DinerMenuIterator::hasNext()
{
	return m_index < m_menuItems->size();
}

void DinerMenuIterator::next()
{
	if (m_index < m_menuItems->size())
	{
		m_index++;
	}
}

MenuItem* DinerMenuIterator::getItem()
{
	return &(*m_menuItems)[m_index];
}

bool PancakeHouseIterator::hasNext()
{
	return m_index < m_menuItems->size();
}

void PancakeHouseIterator::next()
{
	if (m_index < m_menuItems->size())
	{
		m_index++;
	}
}

MenuItem* PancakeHouseIterator::getItem()
{
	return &(m_menuItems->at(m_index));
}
