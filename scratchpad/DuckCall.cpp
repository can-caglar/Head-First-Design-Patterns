#include "DuckCall.h"

extern void printToConsole(const char* str);

DuckCall::DuckCall()
{
	printToConsole("A hunter's duck call has been created.");
	_quacker = std::make_unique<Quack>();
}

void DuckCall::mimic() const
{
	_quacker->quack();
}
