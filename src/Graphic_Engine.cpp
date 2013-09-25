#include "Graphic_Engine.h"


Graphic_Engine::Graphic_Engine(void)
{
	SDL_Init(SDL_INIT_VIDEO); // Initialisation de la SDL

	screen = SDL_CreateWindow("Flyig Shark - A remake by tehCivilian",
						  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
						  804, 1070, SDL_WINDOW_OPENGL);

}


Graphic_Engine::~Graphic_Engine(void)
{
	SDL_Quit(); // Arrêt de la SDL
}

void Graphic_Engine::frame(float delta)
{

}