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
		void registerVisible(VisibleObject*);	//DoddGame keeps a list of VisibleO`bjects, for drawing. They don't draw themselves. Only DoddWindow is allowed to directly access the display.
	private:
		std::list<VisibleObject*> visObjects;	//This is aforementioned list
		DoddWindow* window;						//Pointer to the window for all display tasks
		SDL_Event event;						//Handle SDL events
		bool quit;
};

#endif //GAME_H
