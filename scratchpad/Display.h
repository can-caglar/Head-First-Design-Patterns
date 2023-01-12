#pragma once

class IDisplay
{
public:
	virtual void display(float temp, float humi, float pres) = 0;
};

class DisplayCurrentConditions : public IDisplay
{
public:
	void display(float temp, float humi, float pres) override;
};

class DisplayWeatherStats : public IDisplay
{
public:
	void display(float temp, float humi, float pres) override;
private:
	float _totalTemp;
	float _tempReadings;
	float _minTemp;
	float _maxTemp;
};

class DisplaySimpleForecast : public IDisplay
{
public:
	void display(float temp, float humi, float pres) override;
};