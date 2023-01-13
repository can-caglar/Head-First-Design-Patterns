#include "WeatherData.h"
#include "Display.h"

#include "WeatherData.h"

/* Weather data */

void WeatherData::addObserver(IObserver* observer)
{
    _observers.insert(observer);
}

void WeatherData::removeObserver(IObserver* observer)
{
    _observers.erase(observer);
}

void WeatherData::updateAllObservers()
{
    for (IObserver* observer : _observers)
    {
        observer->update();
    }
}

float WeatherData::getTemperature() const
{
    return _temp;
}

float WeatherData::getHumidity() const
{
    return _humidity;
}

float WeatherData::getPressure() const
{
    return _pressure;
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
    _temp = temp;
    _humidity = humidity;
    _pressure = pressure;

    measurementsChanged();
}

void WeatherData::measurementsChanged()
{
    updateAllObservers();
}
