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

#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <list>

#include "dodd_window.h"
#include "player.h"

class Game
{
	public:
		DoddGame(int scrW, int scrH);			//will create it's own DoddWindow with dimensions of scrW x scrH
		DoddGame(DoddWindow *);					//will simply use the window you give it a pointer to as it would its own
		~DoddGame();
		void registerVisible(VisibleObject*);	//DoddGame keeps a list of VisibleObjects, for drawing. They don't draw themselves. Only DoddWindow is allowed to directly access the display.
		void draw();
		void pollEvent();
		void update();
	private:
		std::list<VisibleObject*> visObjects;	//This is aforementioned list
		DoddWindow* window;						//Pointer to the window for all display tasks
		SDL_Event event;						//Handle SDL events
		bool quit;
};

#endif //GAME_H
