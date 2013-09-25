#include "App.h"
#include <cstdio>
#include <iostream>

using namespace std;

App* App::instance = NULL;

App::App(void)
{
	gfx = new Graphic_Engine();
	cout <<  "Engines loaded" << endl;
	running = true;
}

App::~App(void)
{
}

App* App::getInstance()
{
	if (!instance)
		instance = new App();
	return instance;
}

int App::run()
{
	cout << "Run" << endl;

	while ( running )
	{
		// Getting the delta in ms 
		clock_t now = clock();
		int delta = int( now - lastClk );
		lastClk = now;

		//Steping all engines
		gfx->frame( delta );
	}
	return 0;

}

void App::stop()
{
	running = false;
}