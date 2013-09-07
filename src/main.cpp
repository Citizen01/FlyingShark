/**
 * Entry point of the game
 *
 * @author tehCivilian
 * @date 07/09/2013
 */

#include <stdlib.h>
#include <stdio.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

void pause();

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO); // Initialisation de la SDL
  
   SDL_Window *screen = SDL_CreateWindow("My Game Window",
                          SDL_WINDOWPOS_UNDEFINED,
                          SDL_WINDOWPOS_UNDEFINED,
                          640, 480, SDL_WINDOW_OPENGL);
     
    pause(); // Mise en pause du programme
  
    SDL_Quit(); // Arrêt de la SDL
  
    return EXIT_SUCCESS; // Fermeture du programme
}
 

void pause()
{
    int continuer = 1;
    SDL_Event event;
  
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}