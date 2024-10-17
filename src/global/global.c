#include "./global.h"

App app = {0};
State state = {0};

void init_global_state()
{
  EntityManager* manager = EntityManager_create();
  state.entity_manager = manager;
}
