#pragma once
#include "Engine.h"

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

class Graphic_Engine :
	public Engine
{
private:
	SDL_Window* screen;

public:
	Graphic_Engine(void);
	~Graphic_Engine(void);

	void frame(float delta);
};

