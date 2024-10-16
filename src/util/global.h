#ifndef GLOBAL_H
#define GLOBAL_H

#include <SDL2/SDL_render.h>

typedef struct {
  SDL_Renderer *renderer;
  SDL_Window *window;
} App;

extern App app;

#endif
