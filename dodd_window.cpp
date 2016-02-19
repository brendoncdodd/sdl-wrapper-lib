/*
*Copyright (C) {2016}  {Dodd, Brendon Charles}
*
*This program is free software: you can redistribute it and/or modify
*it under the terms of the GNU General Public License as published by
*the Free Software Foundation, version 3 of the License.
*
*This program is distributed in the hope that it will be useful,
*but WITHOUT ANY WARRANTY; without even the implied warranty of
*MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*GNU General Public License for more details.
*
*You should have received a copy of the GNU General Public License
*along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <SDL2\SDL.h>
#include "dodd_window.h"

DoddWindow::DoddWindow(int width, int height)
	: w(width), h(height)
{
	SDL_Init(SDL_INIT_EVERYTHING); 													//Initializing SDL2
	
	sdlWindow = SDL_CreateWindow("Dodd's Game", SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, 0, 0, SDL_WINDOW_FULLSCREEN_DESKTOP); 		//Creating window - in SDL2 we can make it automatically set the resolution to the Desktop size
	
	sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED); 	//Creating renderer
	
	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear"); 				//make the scaled rendering look smoother.
	SDL_RenderSetLogicalSize(sdlRenderer, width, height);				//in SDL2 we can set a "logical" resolution, SDL will do the conversions to make it fit on the existing physical space
}

DoddWindow::~DoddWindow()
{
	//Deinitialize all things SDL
	SDL_DestroyRenderer(sdlRenderer);
	SDL_DestroyWindow(sdlWindow);
	SDL_Quit();
}
