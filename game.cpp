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

#include "game.h"
#include "dodd_window.h"
#include "visible_object.h"

Game::Game(int scrW, int scrH)
	: quit(false)
{
	window = new DoddWindow(scrW, scrH);`
}

Game::Game(DoddWindow* newWindow)
	: window(newWindow), quit(false)
{
	
}

Game::~Game()
{
	
}

Game::registerVisible(VisibleObject* obj)
{
	visObjects.push_back(obj);
}

Game::draw()
{
	for (VisibleObject* currVisObj : visObjects)
	{
		for (SDL_Rect* currRect : currVisObj->rects)
		{
			
			absoluteRect = new SDL_Rect;
			
		}
	}
}

Game::pollEvent ()
{
	
}

Game::update()
{
	
}
