#include <SDL2\SDL.h>
#include "dodd_window.h"

DoddWindow::DoddWindow(int width, int height)
	: w(width), h(height)
{
	SDL_Init(SDL_INIT_VIDEO); 													//Initializing SDL2
	
	sdlWindow = SDL_CreateWindow("Dodd's Game", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN); 				//Creating window
	
	sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED); 	//Creating renderer
	
}

~DoddWindow()
{
	
	//Deinitialize all things SDL
	SDL_DestroyRenderer(sdlRenderer);
	SDL_DestroyWindow(sdlWindow);
	SDL_Quit();
}
