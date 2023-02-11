#include "Invoker.h"
#include "Command.h"
#include <iostream>

RemoteControl::~RemoteControl()
{
}

RemoteControl::RemoteControl()
{
	for (int i = 0; i < m_maxButtons; i++)
	{
		m_commandsOn[i] = new CommandNull();
		m_commandsOff[i] = new CommandNull();
	}
}

void RemoteControl::setCommand(Command* commandOn, Command* commandOff, int id)
{
	if (id < m_maxButtons)
	{
		m_commandsOn[id] = commandOn;
		m_commandsOff[id] = commandOff;
	}
	else
	{
		std::cout << "Button out of range: " << id << std::endl;
	}
}


void RemoteControl::buttonPressOn(int button)
{
	m_commandsOn[button]->execute();
	m_lastCommandExecuted = m_commandsOn[button];
}

void RemoteControl::buttonPressOff(int button)
{
	m_commandsOff[button]->execute();
	m_lastCommandExecuted = m_commandsOff[button];
}

void RemoteControl::buttonPressUndo()
{
	m_lastCommandExecuted->undo();
}
