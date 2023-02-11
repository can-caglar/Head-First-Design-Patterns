#include "Command.h"
#include <iostream>
#include "Receiver.h"

namespace Helpers
{
	void activateFan(CeilingFan* fan, CeilingFan::Speed speed)
	{
		switch (speed)
		{
		case CeilingFan::SPEED_HIGH:
			fan->high();
			break;
		case CeilingFan::SPEED_MEDIUM:
			fan->medium();
			break;
		case CeilingFan::SPEED_LOW:
			fan->low();
			break;
		case CeilingFan::SPEED_OFF:
			fan->off();
			break;
		}
	}
}

void CommandGarageLightOn::execute()
{
	_door->lightOn();
}

CommandGarageLightOn::~CommandGarageLightOn()
{
	std::cout << "Deleting CommandTurnLightOn" << std::endl;
	if (_door != nullptr)
	{
		delete _door;
		_door = nullptr;
	}
}

void CommandGarageLightOn::undo()
{
	_door->lightOff();
}

void CommandGarageLightOff::execute()
{
	_door->lightOff();
}

void CommandGarageLightOff::undo()
{
	_door->lightOn();
}

CommandGarageLightOff::~CommandGarageLightOff()
{
	delete _door;
}

void CommandGarageDoorOpen::execute()
{
	_door->up();
}

void CommandGarageDoorOpen::undo()
{
	_door->down();
}

Command::~Command()
{
	std::cout << "Deleting Command" << std::endl;
}

void CommandCeilingFanMedium::execute()
{
	m_prevSpeed = m_fan->getSpeed();
	m_fan->medium();
}

void CommandCeilingFanMedium::undo()
{
	Helpers::activateFan(m_fan, m_prevSpeed);
}

void CommandCeilingFanLow::execute()
{
	m_prevSpeed = m_fan->getSpeed();
	m_fan->low();
}

void CommandCeilingFanLow::undo()
{
	Helpers::activateFan(m_fan, m_prevSpeed);
}

void CommandCeilingFanHigh::execute()
{
	m_fan->high();
}

void CommandCeilingFanHigh::undo()
{
	Helpers::activateFan(m_fan, m_prevSpeed);
}

void CommandCeilingFanOff::execute()
{
	m_fan->off();
}

void CommandCeilingFanOff::undo()
{
	Helpers::activateFan(m_fan, m_prevSpeed);
}

void CommandNull::execute()
{
	// do nothing
}

void CommandNull::undo()
{
	// do nothing
}

void MacroCommand::execute()
{
	for (Command* cmd : m_commands)
	{
		cmd->execute();
	}
}

void MacroCommand::undo()
{
	for (Command* cmd : m_commands)
	{
		cmd->undo();
	}
}
