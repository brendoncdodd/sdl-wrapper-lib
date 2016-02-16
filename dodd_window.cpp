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
