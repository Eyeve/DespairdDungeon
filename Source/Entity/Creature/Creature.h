#ifndef DUNGEONOFDESPAIR_CREATURE_H
#define DUNGEONOFDESPAIR_CREATURE_H

#include "ColliderEntity.h"


class Creature: public ColliderEntity {

public:
    Creature(Controller* controller, Texture* texture, Cords<int> cords, Collider* collider):
        ColliderEntity(controller,texture, cords, collider) {}
    ~Creature();



};

#endif //DUNGEONOFDESPAIR_CREATURE_H
