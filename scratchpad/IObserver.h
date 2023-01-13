#pragma once

class WeatherData;

class IObserver
{
public:
	virtual void update() = 0;
};

