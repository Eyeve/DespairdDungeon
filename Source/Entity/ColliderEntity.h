#ifndef DUNGEONOFDESPAIR_COLLIDERENTITY_H
#define DUNGEONOFDESPAIR_COLLIDERENTITY_H

#include "Entity.h"
#include "Collider.h"


class ColliderEntity: public Entity {

    Collider* collider;

public:
    ColliderEntity(Controller* controller, Texture* texture, Cords<int> cords, Collider* collider):
        Entity(controller, texture, cords), collider(collider) {}
    ~ColliderEntity() {}

};

#endif //DUNGEONOFDESPAIR_COLLIDERENTITY_H
