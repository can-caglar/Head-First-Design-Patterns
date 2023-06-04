#pragma once
#include <string>

class Mp3player;

class IMp3State
{
public:
	virtual void play() = 0;
	virtual void pause() = 0;
	virtual void forward() = 0;
	virtual std::string name() = 0;
};

class StateStopped : public IMp3State
{
public:
	StateStopped(Mp3player* mp3player) :
		m_mp3player(mp3player) { };
	void play() override;
	void pause() override;
	void forward() override;
	std::string name() override;
private:
	Mp3player* m_mp3player;
};

class StatePlaying : public IMp3State
{
public:
	StatePlaying(Mp3player* mp3player) :
		m_mp3player(mp3player) { };
	void play() override;
	void pause() override;
	void forward() override;
	std::string name() override;
private:
	Mp3player* m_mp3player;
};

class StatePaused : public IMp3State
{
public:
	StatePaused(Mp3player* mp3player) :
		m_mp3player(mp3player) { };
	void play() override;
	void pause() override;
	void forward() override;
	std::string name() override;
private:
	Mp3player* m_mp3player;
};
