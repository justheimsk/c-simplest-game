#include "entity.h"
#include "../util/global.h"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>

Entity* create_entity(int health, int x, int y)
{
  Entity* ent = (Entity*)malloc(sizeof(Entity));
  ent->health = health;
  ent->x = x;
  ent->y = y;

  return ent;
}

void render_entity(Entity* ent) 
{
  SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 1);
  SDL_RenderFillRect(app.renderer, &(SDL_Rect){.h=10, .w=10, .x=ent->x, .y=ent->y});
}

void destroy_entity(Entity* ent)
{
  free(ent);
}
