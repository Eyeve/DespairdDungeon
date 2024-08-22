
#ifndef DUNGEONOFDESPAIR_EVENTHANDLER_H
#define DUNGEONOFDESPAIR_EVENTHANDLER_H

#include "Session.h"
#include "ControllerEvent.h"
#include "Entity.h"


class EventHandler {

    Session& session;
    float deltaTime;

public:
    EventHandler(Session& session): session(session) {}
    ~EventHandler() {}

    /*
     * @brief deltaTime setter
     *
     * @param deltaTime value to set
     */
    void setDeltaTime(float value) { deltaTime = value; }
    /*
     * @brief process ControllerEvent, updating session data
     *
     * @param event to process
     */
    void process(ControllerEvent event);
    /*
     * @brief Calls the update method of the Player inside the Entity, passing only the necessary changes
     *
     * @param toUpdate entity to process (It should be possible to cast a Controller to a Player)
     */
    void update(Entity* toUpdate);
};

#endif //DUNGEONOFDESPAIR_EVENTHANDLER_H
