#ifndef DUNGEONOFDESPAIR_CONTROLLER_H
#define DUNGEONOFDESPAIR_CONTROLLER_H

#include "ControllerEvent.h"

class Controller {

public:
    /*
     * @brief get an ControllerEvent with a description of the Entity action
     *
     */
    virtual ControllerEvent tick() = 0;
};

#endif //DUNGEONOFDESPAIR_CONTROLLER_H
