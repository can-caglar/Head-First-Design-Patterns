#pragma once

#include "DuckBehaviours.h"
#include <memory>

/*
	A duck call is a device that hunters use to
	mimic the calls (quacks) of ducks. How
	would you implement your own duck call
	that does not inherit from the Duck class?
*/

class DuckCall
{

public:
	DuckCall();
	void mimic() const;

private:
	std::unique_ptr<IQuackBehaviour> _quacker;
};