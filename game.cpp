#include "game.h"

DoddGame::DoddGame(int scrW, int scrH)
	: quit(false)
{
	window = new DoddWindow(scrW, scrH);`
}

DoddGame::DoddGame(DoddWindow* newWindow)
	: window(newWindow), quit(false)
{
	
}

DoddGame::~DoddGame()
{
	
}

DoddGame::registerVisible(VisibleObject* obj)
{
	visObjects.push_back(obj);
}
