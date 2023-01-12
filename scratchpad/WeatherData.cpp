#include "WeatherData.h"
#include "Display.h"

#include "WeatherData.h"

/* Weather data */

WeatherData::WeatherData(std::vector<std::unique_ptr<IDisplay>>& displays)
{
    for (std::unique_ptr<IDisplay>& display : displays)
    {
        _displays.push_back(std::move(display));    // take ownership of the pointers
    }
}

float WeatherData::getTemperature() const
{
    return 1.0f;
}

float WeatherData::getHumidity() const
{
    return 4.0f;
}

float WeatherData::getPressure() const
{
    return 7.0f;
}

void WeatherData::measurementsChanged() const
{
    float temp = getTemperature();
    float humidity = getHumidity();
    float pressure = getPressure();

    for (const std::unique_ptr<IDisplay>& ptrDisplay : _displays)
    {
        ptrDisplay->display(temp, humidity, pressure);
    }
}
