#ifndef GLOBAL_H
#define GLOBAL_H

#include <SDL2/SDL_render.h>
#include "../entity/entity_manager.h"

typedef struct {
  SDL_Renderer *renderer;
  SDL_Window *window;
} App;

extern App app;

typedef struct {
  EntityManager* entity_manager;
} State;

extern State state;
void init_global_state(void);

#endif
