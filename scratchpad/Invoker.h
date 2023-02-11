#pragma once

#include <array>
#include <iostream>

class Command;

class RemoteControl
{
public:
	~RemoteControl();
	RemoteControl();
	void setCommand(Command* commandOn,
		Command* commandOff,
		int id);
	void buttonPressOn(int button);
	void buttonPressOff(int button);
	void buttonPressUndo();
private:
	static const int m_maxButtons = 7;
	std::array<Command*, m_maxButtons> m_commandsOn;
	std::array<Command*, m_maxButtons> m_commandsOff;
	Command* m_lastCommandExecuted;
};
