#ifndef DUNGEONOFDESPAIR_CONTROLLEREVENT_H
#define DUNGEONOFDESPAIR_CONTROLLEREVENT_H

#include "Direction.h"


struct ControllerEvent {

    Direction movementDirection;

    ControllerEvent(Direction movementDirection = Direction::NONE): movementDirection(movementDirection) {}

};

#endif //DUNGEONOFDESPAIR_CONTROLLEREVENT_H
