
#ifndef SDLPROJ_WIN
#define SDLPROJ_WIN

/* Initialize the window elements */

int winInit();

/*
 * Render the window
 * In other words, clear the renderer, add elements to it and present it
 */

void winRender();

/* Clean up SDL2 elements (windows, renderers, textures, surfaces...) */

void winQuit();

#endif

