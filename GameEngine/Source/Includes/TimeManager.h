#pragma once
#include <time.h>

class TimeManager
{
	clock_t previousFrameTimeSinceGameStarted = 0;
	float m_elapsedTime = 0.f;
	float desiredSecondsPerFrame = 1.0f;

public:
	TimeManager() {}
	TimeManager(float desiredSecondsPerFrame) : desiredSecondsPerFrame(desiredSecondsPerFrame)
	{
	}
	float GetElapsedTime(void) const;
	bool ShouldExecuteNextFrame(void);
	void SetNewFrameTime(float newFrameTime)
	{
		desiredSecondsPerFrame = newFrameTime;
	}
};

