#ifndef DUNGEONOFDESPAIR_PLAYER_H
#define DUNGEONOFDESPAIR_PLAYER_H

#include "Controller.h"
#include "SessionEvent.h"

class Player: public Controller {

public:
    Player() {}
    ~Player() {}
    /*
     * @brief updates player data using SessionEvent
     *
     * @param event the updates
     */
    void update(SessionEvent& event) {}

    ControllerEvent tick() override { return ControllerEvent(); }
};


#endif //DUNGEONOFDESPAIR_PLAYER_H
