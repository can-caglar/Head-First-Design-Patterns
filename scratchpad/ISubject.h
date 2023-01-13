#pragma once

#include <vector>
#include "IObserver.h"

class ISubject
{
public:
	virtual void addObserver(IObserver* observer) = 0;
	virtual void removeObserver(IObserver* observer) = 0;
	virtual void updateAllObservers() = 0;
};

