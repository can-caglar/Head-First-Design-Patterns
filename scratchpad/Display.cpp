#include "Display.h"
#include <iostream>

void DisplayCurrentConditions::display(float temp, float humi, float pres)
{
    std::cout << "--- Current Conditions Display ---" << std::endl;
    std::cout << "--- TEMP: " << temp << std::endl;
    std::cout << "--- HUMI: " << humi << std::endl;
    std::cout << "--- PRES: " << pres << std::endl;
    std::cout << std::endl;
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

void DisplaySimpleForecast::display(float temp, float humi, float pres)
{
    float tempTomorrow = (temp) + (humi > 5 ? 2 : -2);

    std::cout << "--- Simple Forecast  ---" << std::endl;
    std::cout << "--- Temp tomorrow: " << tempTomorrow << std::endl;
    std::cout << std::endl;
}

