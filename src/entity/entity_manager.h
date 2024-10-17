#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H

#include "entity.h"
#define MAX_ENTITIES 999

typedef struct {
  Entity* entities;
  int count;
} EntityManager;

EntityManager* EntityManager_create(void);
void EntityManager_destroy(EntityManager*);
void EntityManager_append(Entity*);
void EntityManager_render(void);

#endif
