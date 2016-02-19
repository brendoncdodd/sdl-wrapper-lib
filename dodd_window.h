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

#ifndef DODD_WINDOW_H
#define DODD_WINDOW_H

#include <SDL2\SDL.h>
#include "hints.h"

class DoddWindow
{
	private:
		int w, h;
		
		SDL_Window* sdlWindow;
		SDL_Renderer* sdlRenderer;
		
		bool sdlInitFailed;
	public:
		DoddWindow(int width, int height);
		~DoddWindow();
}

#endif //DODD_WINDOW_H
