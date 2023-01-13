#pragma once

#include "IObserver.h"
#include "WeatherData.h"


class IDisplay: public IObserver
{
public:
	IDisplay() = delete;
	IDisplay(WeatherData* weatherData);
	virtual void display() = 0;
	void update() override;
protected:
	// The IDisplay observers observe only one subject (WeatherData) at a time...
	WeatherData* _weatherDataBeingObserved;
};

class DisplayCurrentConditions : public IDisplay
{
public:
	DisplayCurrentConditions(WeatherData* weatherData) : IDisplay(weatherData) {};
	void display() override;
};

class DisplayWeatherStats : public IDisplay
{
public:
	DisplayWeatherStats(WeatherData* weatherData) :
		_totalTemp(0),
		_tempReadings(0),
		_minTemp(std::numeric_limits<float>::infinity()),
		_maxTemp(-std::numeric_limits<float>::infinity()),
		IDisplay(weatherData) {};
	void display() override;
private:
	float _totalTemp;
	float _tempReadings;
	float _minTemp;
	float _maxTemp;
};

class DisplaySimpleForecast : public IDisplay
{
public:
	DisplaySimpleForecast(WeatherData* weatherData) : IDisplay(weatherData) {};
	void display() override;
};

class DisplayHeatIndex : public IDisplay
{
public:
	DisplayHeatIndex(WeatherData* weatherData) : IDisplay(weatherData) {};
	void display() override;
};

class DisplayWindSpeed : public IDisplay
{
public:
	DisplayWindSpeed(WeatherData* weatherData) : IDisplay(weatherData) {};
	void display() override;
};