#ifndef DUNGEONOFDESPAIR_ENTITY_H
#define DUNGEONOFDESPAIR_ENTITY_H

#include "Cords.h"
#include "Texture.h"
#include "Controller.h"


class Entity {

    Controller* controller;
    Texture* texture;
    Cords<int> cords;

public:
    Entity(Controller* controller, Texture* texture, Cords<int> cords): controller(controller), texture(texture), cords(cords) {}
    ~Entity() {}

};

#endif //DUNGEONOFDESPAIR_ENTITY_H
