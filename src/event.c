
/*
 * event.c - Handle events
 *
 * Header: event.h
 */

#include <SDL2/SDL.h>

SDL_Event event;

extern SDL_bool stateRunning;

void eventHandle() {

	if (SDL_WaitEvent(&event) != SDL_FALSE) {

		switch (event.type) {

			case SDL_QUIT: stateRunning = SDL_FALSE; break;

			case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {

				case SDLK_ESCAPE: stateRunning = SDL_FALSE; break;

			}

		}

	}

}

