#pragma once
#include "IIterator.h"

class IMenu
{
public:
	virtual IIterator* createIterator() = 0;
};

