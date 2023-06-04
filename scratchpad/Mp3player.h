#pragma once
#include <vector>
#include <string>
#include "Mp3States.h"

class Mp3player
{
public:
	Mp3player(std::vector<std::string> songs) : m_songs(songs), m_currentSongIndex(0)
	{ 
		m_stopped = new StateStopped(this);
		m_playing = new StatePlaying(this);
		m_paused = new StatePaused(this);
		m_currentState = m_stopped;
	};
	void play();
	void pause();
	void forward();
	void changeState(IMp3State* newState);
	void nextSong();
	IMp3State* getStoppedState();
	IMp3State* getPlayingState();
	IMp3State* getPausedState();
private:
	std::vector<std::string> m_songs;
	size_t m_currentSongIndex;
	IMp3State* m_stopped;
	IMp3State* m_playing;
	IMp3State* m_paused;
	IMp3State* m_currentState;
	friend std::ostream& operator<<(std::ostream& os, const Mp3player& context);
};
