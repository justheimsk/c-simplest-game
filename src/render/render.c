#include "render.h"
#include "../util/defs.h"
#include "../util/global.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>

void render_init(void)
{
  if(SDL_Init(SDL_INIT_VIDEO) < 0) 
  {
    printf("Failed to init SDL2: %s\n", SDL_GetError());
    exit(1);
  }

  app.window = SDL_CreateWindow("Simple game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,WINDOW_W, WINDOW_H, 0);
  if(!app.window)
  {
    printf("Failed to create window: %s\n", SDL_GetError());
    exit(1);
  }

  app.renderer = SDL_CreateRenderer(app.window, -1, 0);
  if(!app.renderer)
  {
    printf("Failed to create renderer: %s\n", SDL_GetError());
    exit(1);
  }

  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
}
