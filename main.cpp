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

const int SCR_W = 1024;
const int SCR_H = 768;

DoddGame* game;

int main(int argc, char** argv)
{
	game = new DoddGame(SCR_W, SCR_H);
	
	while (running)
	{
		game->pollEvent();
		game->update();
		game->draw();
	}
	
	delete game;
	return 0;
}
