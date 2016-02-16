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

#ifndef VISIBLE_OBJECT_H
#define VISIBLE_OBJECT_H

#include <SDL2/SDL.h>
#include <list>

class Game;	//Hint at Game class so we can have a pointer to it in the constructor

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
