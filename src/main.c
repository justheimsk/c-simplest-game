#include "entity/entity.h"
#include "render/render.h"
#include "util/global.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_timer.h>

int main()
{
  render_init();
  Entity* player = create_entity(10, 10, 10);

  while(1)
  {
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
      if(event.type == SDL_QUIT) exit(0);
    }

    SDL_SetRenderDrawColor(app.renderer, 0, 0, 0, 1);
    SDL_RenderClear(app.renderer);

    render_entity(player);

    SDL_RenderPresent(app.renderer);
    SDL_Delay(16);
  }
  return 0;
}
