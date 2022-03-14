
#include "./include/win.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

SDL_Renderer* renMain;
SDL_Window*   winMain;

int winInit() {

	if (SDL_Init(SDL_INIT_VIDEO) >= 0) {

		winMain = SDL_CreateWindow(
			"Window",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			640, 640, 0
		);

		if (winMain != 0) {

			renMain = SDL_CreateRenderer(winMain, -1, 0);

		} else return EXIT_FAILURE;

	} else return EXIT_FAILURE;

	return EXIT_SUCCESS;

}

void winRender() {

	SDL_RenderClear(renMain);

	SDL_RenderPresent(renMain);

}

void winQuit() {

	SDL_DestroyRenderer(renMain);
	SDL_DestroyWindow(winMain);

}

