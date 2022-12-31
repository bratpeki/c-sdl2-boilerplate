
/*
 * win.c - Handle graphical processes
 *
 * Header: win.h
 */

#include "./include/win.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdlib.h>

SDL_Renderer *renMain = NULL;
SDL_Window   *winMain = NULL;

int winInit() {

	if (SDL_Init(SDL_INIT_VIDEO) == -1) return EXIT_FAILURE;

	winMain = SDL_CreateWindow(
		"Window",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		640, 640, 0
	);

	if (winMain == NULL) return EXIT_FAILURE;

	renMain = SDL_CreateRenderer(winMain, -1, 0);

	if (renMain == NULL) return EXIT_FAILURE;

	return EXIT_SUCCESS;

}

void winRender() {

	SDL_SetRenderDrawColor(renMain, 0, 0, 0, 255);

	SDL_RenderClear(renMain);

	SDL_RenderPresent(renMain);

}

void winQuit() {

	SDL_DestroyRenderer(renMain);
	SDL_DestroyWindow(winMain);

	SDL_QuitSubSystem(SDL_INIT_VIDEO);
	SDL_Quit();

}

