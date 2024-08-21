#ifndef DUNGEONOFDESPAIR_CONTROLLER_H
#define DUNGEONOFDESPAIR_CONTROLLER_H

#include "Session.h"
#include "ControllerEvent.h"

class Controller {

public:
    /*
     * @brief get an ControllerEvent with a description of the Entity action
     *
     */
    virtual ControllerEvent tick();
};

#endif //DUNGEONOFDESPAIR_CONTROLLER_H
