#include "Receiver.h"
#include "Command.h"
#include <iostream>

void GarageDoor::up()
{
	std::cout << "Garage door : up" << std::endl;
}

void GarageDoor::down()
{
	std::cout << "Garage door : down" << std::endl;
}

void GarageDoor::stop()
{
	std::cout << "Garage door : stop" << std::endl;
}

void GarageDoor::lightOn()
{
	std::cout << "Garage door : lightOn" << std::endl;
}

void GarageDoor::lightOff()
{
	std::cout << "GarageDoor : off" << std::endl;
}

void CeilingLight::on()
{
	std::cout << "CeilingLight : on" << std::endl;
}

void CeilingLight::off()
{
	std::cout << "CeilingLight : off" << std::endl;
}

void CeilingLight::dim()
{
	std::cout << "CeilingLight : dim" << std::endl;
}

void CeilingFan::high()
{
	std::cout << "CeilingFan : high" << std::endl;
	m_currentSpeed = SPEED_HIGH;
}

void CeilingFan::medium()
{
	std::cout << "CeilingFan : medium" << std::endl;
	m_currentSpeed = SPEED_MEDIUM;
}

void CeilingFan::low()
{
	std::cout << "CeilingFan : low" << std::endl;
	m_currentSpeed = SPEED_LOW;
}

void CeilingFan::off()
{
	std::cout << "CeilingFan : off" << std::endl;
	m_currentSpeed = SPEED_OFF;
}

CeilingFan::Speed CeilingFan::getSpeed()
{
	std::cout << "CeilingFan : getSpeed" << std::endl;
	return m_currentSpeed;
}

void OutdoorLight::on()
{
	std::cout << "OutdoorLight : on" << std::endl;
}

void OutdoorLight::off()
{
	std::cout << "OutdoorLight : off" << std::endl;
}

void GardenLight::setDuskTime()
{
	std::cout << "GardenLight : setDuskTime" << std::endl;
}

void GardenLight::setDawnTime()
{
	std::cout << "GardenLight : setDawnTime" << std::endl;
}

void GardenLight::manualOn()
{
	std::cout << "GardenLight : manualOn" << std::endl;
}

void GardenLight::manualOff()
{
	std::cout << "GardenLight : manualOff" << std::endl;
}

void Sprinkler::waterOn()
{
	std::cout << "Sprinkler : waterOn" << std::endl;
}

void Sprinkler::waterOff()
{
	std::cout << "Sprinkler : waterOff" << std::endl;
}

void TV::on()
{
	std::cout << "TV : on" << std::endl;
}

void TV::off()
{
	std::cout << "TV : off" << std::endl;
}

void TV::setInputChannel(int channel)
{
	std::cout << "TV : channe" << std::endl;
}

void TV::setVolume(int volume)
{
	std::cout << "TV : volum" << std::endl;
}

void Light::on()
{
	std::cout << "Light : on" << std::endl;
}

void Light::off()
{
	std::cout << "Light : off" << std::endl;
}

void SecurityControl::arm()
{
	std::cout << "SecurityControl : arm" << std::endl;
}

void SecurityControl::disarm()
{
	std::cout << "SecurityControl : disarm" << std::endl;
}

void Stereo::on()
{
	std::cout << "Stereo : on" << std::endl;
}

void Stereo::off()
{
	std::cout << "Stereo : off" << std::endl;
}

void Stereo::setCd()
{
	std::cout << "Stereo : setCd" << std::endl;
}

void Stereo::setDvd()
{
	std::cout << "Stereo : setDvd" << std::endl;
}

void Stereo::setRadio()
{
	std::cout << "Stereo : setRadio" << std::endl;
}

void Stereo::setVolume(int volume)
{
	std::cout << "Stereo : volum" << std::endl;
}

void Hottub::circulate()
{
	std::cout << "Hottub : circulate" << std::endl;
}

void Hottub::jetsOn()
{
	std::cout << "Hottub : jetsOn" << std::endl;
}

void Hottub::jetsOff()
{
	std::cout << "Hottub : jetsOff" << std::endl;
}

void Hottub::setTemperature()
{
	std::cout << "Hottub : setTemperature" << std::endl;
}
