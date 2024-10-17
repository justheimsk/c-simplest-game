#ifndef ENTITY_H
#define ENTITY_H

typedef struct {
  int health, x, y;
} Entity;

Entity* Entity_create(int, int, int);
void Entity_render(Entity*);
void Entity_destroy(Entity*);

#endif
