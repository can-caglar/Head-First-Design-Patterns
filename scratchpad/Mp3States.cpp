#include "Mp3States.h"
#include "Mp3player.h"
#include <iostream>

// Stopped state

void StateStopped::play()
{
	std::cout << "Started playing" << std::endl;
	m_mp3player->changeState(m_mp3player->getPlayingState());
}

void StateStopped::pause()
{
	std::cout << "Pause does nothing while stopped." << std::endl;
}

void StateStopped::forward()
{
	std::cout << "Goes to next song but will be paused." << std::endl;
	m_mp3player->changeState(m_mp3player->getPausedState());
	m_mp3player->nextSong();
}

std::string StateStopped::name()
{
	return "Stopped";
}

// Playing state

void StatePlaying::play()
{
	std::cout << "Pressed play whilst playing. Pausing!" << std::endl;
	m_mp3player->changeState(m_mp3player->getPausedState());
}

void StatePlaying::pause()
{
	std::cout << "Was playing, now pausing" << std::endl;
	m_mp3player->changeState(m_mp3player->getPausedState());
}

void StatePlaying::forward()
{
	std::cout << "Going to the next song and continuing playing." << std::endl;
	m_mp3player->nextSong();
}

std::string StatePlaying::name()
{
	return "Playing";
}

// Paused state

void StatePaused::play()
{
	std::cout << "Continuing from current song" << std::endl;
	m_mp3player->changeState(m_mp3player->getPlayingState());
}

void StatePaused::pause()
{
	std::cout << "Pausing a paused song does nothing." << std::endl;
}

void StatePaused::forward()
{
	std::cout << "Going to the next song. Remaining paused." << std::endl;
	m_mp3player->nextSong();
}

std::string StatePaused::name()
{
	return "Paused";
}
