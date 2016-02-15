#include "game.h"

const int SCR_W = 1024;
const int SCR_H = 768;

DoddGame* game;

int main(int argc, char** argv)
{
	game = new DoddGame(SCR_W, SCR_H);
}
