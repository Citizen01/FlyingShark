#pragma once

#include <ctime>
#include "Graphic_Engine.h"

class App
{
private:
	static App* instance;
	bool running;

	//FPS
	clock_t lastClk;

	//engines
	Graphic_Engine* gfx;

public:
	App(void);
	~App(void);

	static App* getInstance();
	void stop();

	int run();
};

