#ifndef ENTITY_H
#define ENTITY_H

typedef struct {
  int health, x, y;
} Entity;

Entity* create_entity(int, int, int);
void render_entity(Entity*);
void destroy_entity(Entity*);

#endif
