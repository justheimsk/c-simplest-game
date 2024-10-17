#include "entity/entity.h"
#include "entity/entity_manager.h"
#include "render/render.h"
#include "global/global.h"
#include "util/defs.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_timer.h>
#include <stdlib.h>
#include <time.h>

int crandom(int max) {
  return (rand() % (max - 0 + 1) + 0);
}

int main()
{
  render_init();
  init_global_state();
  srand(time(NULL));

  Entity* player = Entity_create(10, 10, 10);
  EntityManager_append(player);

  for(int i = 0; i < 100; i++)
  {
    Entity* ent = Entity_create(10, crandom(WINDOW_W), crandom(WINDOW_H));
    EntityManager_append(ent);
  }

  while(1)
  {
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
      if(event.type == SDL_QUIT) exit(0);
    }

    SDL_SetRenderDrawColor(app.renderer, 0, 0, 0, 1);
    SDL_RenderClear(app.renderer);

    EntityManager_render();

    SDL_RenderPresent(app.renderer);
    SDL_Delay(16);
  }
  return 0;
}
