#pragma once

#include "Receiver.h"
#include <vector>

class Command
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
	virtual ~Command();
};

class MacroCommand : public Command
{
public:
	MacroCommand(std::vector<Command*> commands) :
		m_commands(commands) {};
	void execute() override;
	void undo() override;
private:
	std::vector<Command*> m_commands;
};

class CommandNull : public Command
{
public:
	void execute() override;
	void undo() override;
};

class CommandGarageLightOn : public Command
{
public:
	CommandGarageLightOn(GarageDoor* garage) :
		_door(garage) {};
	void execute() override;
	void undo() override;
	~CommandGarageLightOn();
private:
	GarageDoor* _door;
};

class CommandGarageLightOff : public Command
{
public:
	CommandGarageLightOff(GarageDoor* garage) :
		_door(garage) {};
	void execute() override;
	void undo() override;
	~CommandGarageLightOff();
private:
	GarageDoor* _door;
};

class CommandGarageDoorOpen : public Command
{
public:
	CommandGarageDoorOpen(GarageDoor* garage) :
		_door(garage) {};
	void execute() override;
	void undo() override;
private:
	GarageDoor* _door;
};

class CommandCeilingFanMedium : public Command
{
public:
	CommandCeilingFanMedium(CeilingFan* fan)
		: m_fan(fan) { };
	void execute() override;
	void undo() override;
private:
	CeilingFan* m_fan;
	CeilingFan::Speed m_prevSpeed = CeilingFan::SPEED_OFF;
};

class CommandCeilingFanLow : public Command
{
public:
	CommandCeilingFanLow(CeilingFan* fan)
		: m_fan(fan) { };
	void execute() override;
	void undo() override;
private:
	CeilingFan* m_fan;
	CeilingFan::Speed m_prevSpeed = CeilingFan::SPEED_OFF;
};

class CommandCeilingFanHigh : public Command
{
public:
	CommandCeilingFanHigh(CeilingFan* fan)
		: m_fan(fan) { };
	void execute() override;
	void undo() override;
private:
	CeilingFan* m_fan;
	CeilingFan::Speed m_prevSpeed = CeilingFan::SPEED_OFF;
};

class CommandCeilingFanOff : public Command
{
public:
	CommandCeilingFanOff(CeilingFan* fan)
		: m_fan(fan) { };
	void execute() override;
	void undo() override;
private:
	CeilingFan* m_fan;
	CeilingFan::Speed m_prevSpeed = CeilingFan::SPEED_OFF;
};
