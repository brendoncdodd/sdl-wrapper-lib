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

#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2\SDL.h>
#include "hints.h"
#include "visible_object.h"

class Player : public VisibleObject
{
	public:
		Player(Game* master);
		~Player();
	private:
		
};

#endif //PLAYER_H
