#pragma once
#include <vector>
#include "MenuItem.h"
#include <array>
#include <vector>

class IIterator
{
public:
	virtual bool hasNext() = 0;
	virtual void next() = 0;
	virtual MenuItem* getItem() = 0;
};

class DinerMenuIterator : public IIterator
{
public:
	DinerMenuIterator(std::array<MenuItem, 4>* const menuItems) :
		m_menuItems(menuItems), m_index(0) {};
	bool hasNext() override;
	void next() override;
	MenuItem* getItem() override;
private:
	std::array<MenuItem, 4>* const m_menuItems;
	int m_index;
};

class PancakeHouseIterator : public IIterator
{
public:
	PancakeHouseIterator(std::vector<MenuItem>* const menuItems) :
		m_menuItems(menuItems), m_index(0) {};
	bool hasNext() override;
	void next() override;
	MenuItem* getItem() override;
private:
	std::vector<MenuItem>* const m_menuItems;
	size_t m_index;
};
