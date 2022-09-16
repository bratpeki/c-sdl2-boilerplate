
/*
 * event.c - Handle events
 *
 * Header: event.h
 */

#include <SDL2/SDL.h>

SDL_Event event;

extern SDL_bool stateRunning;

void eventHandle() {

	/*
	 * SDL_WaitEvent waits for an event to be input
	 * Therefore, it halts program execution until it gets and input
	 *
	 * In case you want the program to run independent of input events
	 * you might want to use the following:
	 *
	 * while (SDL_PollEvent(&event)) { ... }
	 */

	SDL_WaitEvent(&event);

	switch (event.type) {

		case SDL_QUIT: stateRunning = SDL_FALSE; break;

		case SDL_KEYDOWN:
		switch (event.key.keysym.sym) {

			case SDLK_ESCAPE: stateRunning = SDL_FALSE; break;

		}

	}


}

