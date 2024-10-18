#include "entity.h"
#include "../util/defs.h"
#include "../global/global.h"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>

int _random() {
  float random_float = (float)rand() / (float)RAND_MAX;

  return (random_float * 2.0f) - 1.0f;
}

Entity* Entity_create(int health, int x, int y)
{
  Entity* ent = (Entity*)malloc(sizeof(Entity));
  ent->health = health;
  ent->x = x;
  ent->y = y;
  ent->speedX = 2;
  ent->speedY = 2;
  ent->size = 10;

  return ent;
}

void Entity_render(Entity* ent) 
{
  SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 1);
  SDL_RenderFillRect(app.renderer, &(SDL_Rect){.h=ent->size, .w=ent->size, .x=ent->x, .y=ent->y});
}

void Entity_update(Entity* ent)
{
  if((ent->x >= WINDOW_W - ent->size && ent->speedX > 0) || (ent->x <= 0 && ent->speedX < 0)) ent->speedX *= -1;
  if((ent->y >= WINDOW_H - ent->size && ent->speedY > 0) || (ent->y <= 0 && ent->speedY < 0)) ent->speedY *= -1;

  ent->x += ent->speedX;
  ent->y += ent->speedY;
}

void Entity_destroy(Entity* ent)
{
  free(ent);
}
