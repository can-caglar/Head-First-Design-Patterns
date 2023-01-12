#pragma once

class WeatherData
{
public:
	float getTemperature() const;
	float getHumidity() const;
	float getPressure() const;
	// called whenever weather measurements have been updated
	void measurementsChanged() const;	
};