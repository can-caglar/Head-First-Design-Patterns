#pragma once

#include "ISubject.h"
#include <unordered_set>

class WeatherData : public ISubject
{
public:
	WeatherData() : _temp(0), _humidity(0), _pressure(0) {};
	void addObserver(IObserver* observer) override;
	void removeObserver(IObserver* observer) override;
	void updateAllObservers() override;

	float getTemperature() const;
	float getHumidity() const;
	float getPressure() const;
	void setMeasurements(float temp, float humidity, float pressure);
private:
	void measurementsChanged();  // called whenever weather measurements have been updated
	std::unordered_set<IObserver*> _observers;
	float _temp;
	float _humidity;
	float _pressure;
};
