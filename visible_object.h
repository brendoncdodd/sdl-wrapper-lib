#ifndef VISIBLE_OBJECT_H
#define VISIBLE_OBJECT_H

#include <list>
#include "game.h"

class VisibleObject
{
	public:
		VisibleObject(Game *);
	private:
		int x, y;					//Position of object in play area
		int col_r, col_g, col_b;	//RGB for primary color
		std::list<SDL_Rect*> rects;		//List of rects used to compose the object`
};

#endif //VISIBLE_OBJECT_H
