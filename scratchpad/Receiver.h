#pragma once

// Most of the "Receivers" from the example
// all in one header file for simplicity.

class GarageDoor
{
public:
	void up();
	void down();
	void stop();
	void lightOn();
	void lightOff();
};

class CeilingLight
{
public:
	void on();
	void off();
	void dim();
};

class CeilingFan
{
public:
	enum Speed
	{
		SPEED_HIGH,
		SPEED_MEDIUM,
		SPEED_LOW,
		SPEED_OFF
	};
	void high();
	void medium();
	void low();
	void off();
	Speed getSpeed();
private:
	Speed m_currentSpeed;
};

class OutdoorLight
{
public:
	void on();
	void off();
};

class GardenLight
{
public:
	void setDuskTime();
	void setDawnTime();
	void manualOn();
	void manualOff();
};

class Sprinkler
{
public:
	void waterOn();
	void waterOff();
};

class TV
{
public:
	void on();
	void off();
	void setInputChannel(int channel);
	void setVolume(int volume);
private:
	int m_currentChannel;
	int m_currentVolume;
};

class Light
{
public:
	void on();
	void off();
};

class SecurityControl
{
public:
	void arm();
	void disarm();
};

class Stereo
{
public:
	void on();
	void off();
	void setCd();
	void setDvd();
	void setRadio();
	void setVolume(int volume);
private:
	int m_currentVolume;
};

class Hottub
{
public:
	void circulate();
	void jetsOn();
	void jetsOff();
	void setTemperature();
};
