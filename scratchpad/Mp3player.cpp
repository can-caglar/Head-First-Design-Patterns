#include "Mp3player.h"
#include <iostream>

void Mp3player::play()
{
	m_currentState->play();
}

void Mp3player::pause()
{
	m_currentState->pause();
}

void Mp3player::forward()
{
	m_currentState->forward();
}

void Mp3player::changeState(IMp3State* newState)
{
	m_currentState = newState;
}

void Mp3player::nextSong()
{
	m_currentSongIndex++;
	if (m_currentSongIndex >= m_songs.size())
	{
		m_currentSongIndex = 0;
	}
}

IMp3State* Mp3player::getStoppedState()
{
	return m_stopped;
}

IMp3State* Mp3player::getPlayingState()
{
	return m_playing;
}

IMp3State* Mp3player::getPausedState()
{
	return m_paused;
}

std::ostream& operator<<(std::ostream& os, const Mp3player& context) 
{
	os << "Current Song: " << context.m_songs[context.m_currentSongIndex] << std::endl;
	os << "State: " << context.m_currentState->name();
	return os;
}