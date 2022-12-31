
/*
 * main.c - The main C execution source file
 */

#include "./include/event.h"
#include "./include/win.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_stdinc.h>

#include <stdlib.h>

SDL_bool stateRunning = SDL_TRUE;

int main( /* int argc, char* argv[] */ ) {

	if ( winInit() ) return EXIT_FAILURE;
	else {

		while (stateRunning) {

			winRender();
			eventHandle();

		}

		winQuit();

		return EXIT_SUCCESS;

	}

}

