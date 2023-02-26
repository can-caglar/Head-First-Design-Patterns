#pragma once

#include "Brew.h"

class Coffee : public Brew
{
public:
	void brew() override;
	void addCondements() override;
	bool wantsCondements() override;
};

