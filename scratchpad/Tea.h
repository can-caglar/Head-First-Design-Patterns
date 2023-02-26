#pragma once

#include "Brew.h"

class Tea : public Brew
{
public:
	void brew() override;
	void addCondements() override;
	bool wantsCondements() override;
};
