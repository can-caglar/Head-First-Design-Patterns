#pragma once

#include "Display.h"
#include <vector>
#include <memory>

class WeatherData
{
public:
	WeatherData() = delete;
	WeatherData(std::vector<std::unique_ptr<IDisplay>>& displays);
	float getTemperature() const;
	float getHumidity() const;
	float getPressure() const;
	// called whenever weather measurements have been updated
	void measurementsChanged() const;	
private:
	std::vector<std::unique_ptr<IDisplay>> _displays;
};
