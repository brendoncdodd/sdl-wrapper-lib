#ifndef DODD_WINDOW_H
#define DODD_WINDOW_H

#include <SDL2\SDL.h>

class DoddWindow
{
	private:
		int w, h;
		
		SDL_Window* sdlWindow;
		SDL_Renderer* sdlRenderer;
		
		bool sdlInitFailed;
	public:
		DoddWindow(int width, int height);
		~DoddWindow();``
}

#endif //DODD_WINDOW_H
