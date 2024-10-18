#ifndef ENTITY_H
#define ENTITY_H

typedef struct {
  int health;
  float x, y, size;
  float speedX, speedY;
} Entity;

Entity* Entity_create(int, int, int);
void Entity_render(Entity*);
void Entity_destroy(Entity*);
void Entity_update(Entity*);

#endif
