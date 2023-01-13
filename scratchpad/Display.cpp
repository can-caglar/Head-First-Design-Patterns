#include "Display.h"
#include <iostream>

DisplayCurrentConditions::DisplayCurrentConditions(WeatherData* weatherData)
{
    _weatherData = weatherData;
    _weatherData->addObserver(this);
}

void DisplayCurrentConditions::display(float temp, float humi, float pres)
{
    std::cout << "--- Current Conditions Display ---" << std::endl;
    std::cout << "--- TEMP: " << temp << std::endl;
    std::cout << "--- HUMI: " << humi << std::endl;
    std::cout << "--- PRES: " << pres << std::endl;
    std::cout << std::endl;
}

void DisplayCurrentConditions::update()
{
    // new weather data
    display(_weatherData->getTemperature(), _weatherData->getHumidity(), _weatherData->getPressure());
}

DisplayWeatherStats::DisplayWeatherStats(WeatherData* weatherData) : 
    _totalTemp(0), _tempReadings(0), _minTemp(std::numeric_limits<float>::infinity()), _maxTemp(-std::numeric_limits<float>::infinity())
{
    _weatherData = weatherData;
    _weatherData->addObserver(this);
}

void DisplayWeatherStats::display(float temp, float humi, float pres)
{
    // Update stats
    if (temp < _minTemp)
    {
        _minTemp = temp;
    }
    if (temp > _maxTemp)
    {
        _maxTemp = temp;
    }
    _totalTemp += temp;
    _tempReadings++;
    
    // Display
    std::cout << "--- Weather Stats ---" << std::endl;
    std::cout << "--- Avg Temp: " << (_totalTemp / _tempReadings) << std::endl;
    std::cout << "--- Min Temp: " << _minTemp << std::endl;
    std::cout << "--- Max Temp: " << _maxTemp << std::endl;
    std::cout << std::endl;
}

void DisplayWeatherStats::update()
{
    // new weather data
    display(_weatherData->getTemperature(), _weatherData->getHumidity(), _weatherData->getPressure());
}

void DisplaySimpleForecast::display(float temp, float humi, float pres)
{
    float tempTomorrow = (temp) + (humi > 5 ? 2 : -2);

    std::cout << "--- Simple Forecast  ---" << std::endl;
    std::cout << "--- Temp tomorrow: " << tempTomorrow << std::endl;
    std::cout << std::endl;
}

void DisplaySimpleForecast::update()
{
    // new weather data
    display(_weatherData->getTemperature(), _weatherData->getHumidity(), _weatherData->getPressure());
}

DisplaySimpleForecast::DisplaySimpleForecast(WeatherData* weatherData)
{
    _weatherData = weatherData;
    _weatherData->addObserver(this);
}

