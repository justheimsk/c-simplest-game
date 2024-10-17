#include "./entity_manager.h"
#include "entity.h"
#include "../global/global.h"
#include <stdlib.h>

EntityManager* EntityManager_create(void)
{
  EntityManager* manager = (EntityManager*)malloc(sizeof(EntityManager));
  manager->entities = (Entity*)malloc(MAX_ENTITIES * sizeof(Entity));
  manager->count = 0;

  return manager;
}

void EntityManager_append(Entity* ent)
{
  state.entity_manager->entities[state.entity_manager->count] = *ent;
  state.entity_manager->count++;
}

void EntityManager_render(void)
{
  for(int i = 0; i < state.entity_manager->count; i++)
  {
    Entity_render(&state.entity_manager->entities[i]);
  }
}

void EntityManager_destroy(EntityManager* manager)
{
  for (int i = 0; i < state.entity_manager->count; i++) {
    Entity_destroy(&state.entity_manager->entities[i]);
  }

  free(manager->entities);
  free(manager);
};
