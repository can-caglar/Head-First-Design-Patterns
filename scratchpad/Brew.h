#pragma once

class Brew
{
public:
	void prepare();	  // the template method. not virtual, so it's "hidden" and cannot be overriden
	void pourBoilingWater();
	virtual void brew() = 0;
	void pourInCup();
	virtual void addCondements() = 0;
	virtual bool wantsCondements(); // hook method - can be overriden but it's up to the subclass
};
