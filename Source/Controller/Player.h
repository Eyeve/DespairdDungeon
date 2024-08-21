#ifndef DUNGEONOFDESPAIR_PLAYER_H
#define DUNGEONOFDESPAIR_PLAYER_H

#include "Controller.h"
#include "Session/SessionEvent.h"

class Player: public Controller {

public:
    /*
     * @brief updates player data using SessionEvent
     *
     * @param event the updates
     */
    void update(SessionEvent& event);

    ControllerEvent tick() override;
};


#endif //DUNGEONOFDESPAIR_PLAYER_H
