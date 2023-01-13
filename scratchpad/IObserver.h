#pragma once

class WeatherData;

class IObserver
{
public:
	virtual void update(WeatherData* subjectGivingNotification) = 0;
};

