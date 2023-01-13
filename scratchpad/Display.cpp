#include "Display.h"
#include <iostream>

IDisplay::IDisplay(WeatherData* weatherData)
{
    _weatherDataBeingObserved = weatherData;
    _weatherDataBeingObserved->addObserver(this);
}

void IDisplay::update()
{
    display();
}

void DisplayCurrentConditions::display()
{
    float temp = _weatherDataBeingObserved->getTemperature();
    float humi = _weatherDataBeingObserved->getHumidity();
    float pres = _weatherDataBeingObserved->getPressure();

    std::cout << "--- Current Conditions Display ---" << std::endl;
    std::cout << "--- TEMP: " << temp << std::endl;
    std::cout << "--- HUMI: " << humi << std::endl;
    std::cout << "--- PRES: " << pres << std::endl;
    std::cout << std::endl;
}

void DisplayWeatherStats::display()
{
    float temp = _weatherDataBeingObserved->getTemperature();
    float humi = _weatherDataBeingObserved->getHumidity();
    float pres = _weatherDataBeingObserved->getPressure();

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

void DisplaySimpleForecast::display()
{
    float temp = _weatherDataBeingObserved->getTemperature();
    float humi = _weatherDataBeingObserved->getHumidity();
    float pres = _weatherDataBeingObserved->getPressure();

    float tempTomorrow = (temp)+(humi > 5 ? 2 : -2);

    std::cout << "--- Simple Forecast  ---" << std::endl;
    std::cout << "--- Temp tomorrow: " << tempTomorrow << std::endl;
    std::cout << std::endl;
}

void DisplayHeatIndex::display()
{
    float temp = _weatherDataBeingObserved->getTemperature();
    float humi = _weatherDataBeingObserved->getHumidity();
    float pres = _weatherDataBeingObserved->getPressure();

    std::cout << "--- DisplayHeatIndex  ---" << std::endl;
    std::cout << "--- Fake Heat Index: " << temp * humi * pres << std::endl;
    std::cout << std::endl;
}

void DisplayWindSpeed::display()
{
    float windspeed = _weatherDataBeingObserved->getWindSpeed();

    std::cout << "~~~ Wind Speed  ~~~" << std::endl;
    std::cout << "~~~ Value: " << windspeed << std::endl;
    std::cout << std::endl;
}