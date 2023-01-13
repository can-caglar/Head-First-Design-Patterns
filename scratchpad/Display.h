#pragma once

#include "IObserver.h"
#include "WeatherData.h"

class IDisplay
{
public:
	virtual void display(float temp, float humi, float pres) = 0;
};

class DisplayCurrentConditions : public IDisplay, public IObserver
{
public:
	DisplayCurrentConditions(WeatherData* weatherData);
	void display(float temp, float humi, float pres) override;
	void update() override;
private:
	WeatherData* _weatherData;
};

class DisplayWeatherStats : public IDisplay, public IObserver
{
public:
	DisplayWeatherStats(WeatherData* weatherData);
	void display(float temp, float humi, float pres) override;
	void update() override;
private:
	float _totalTemp;
	float _tempReadings;
	float _minTemp;
	float _maxTemp;
	WeatherData* _weatherData;
};

class DisplaySimpleForecast : public IDisplay, public IObserver
{
public:
	DisplaySimpleForecast(WeatherData* weatherData);
	void display(float temp, float humi, float pres) override;
	void update() override;
private:
	WeatherData* _weatherData;
};