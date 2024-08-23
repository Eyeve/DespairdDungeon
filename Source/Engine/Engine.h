#ifndef DUNGEONOFDESPAIR_ENGINE_H
#define DUNGEONOFDESPAIR_ENGINE_H

#include <iostream>
#include <random>
#include <chrono>
#include <unordered_set>

#include "Session.h"
#include "EventHandler.h"
#include "Controller.h"
#include "Entity.h"


class Engine {

protected:
    std::unordered_set<Controller*> controllers;
    std::unordered_set<Entity*> playerEntities;
    Session session;
    EventHandler eventHandler;
private:
    bool isRunning;
    bool isExecuted;

public:
    Engine(): eventHandler(EventHandler(session)), isRunning(false), isExecuted(false) { initialization(); }
    ~Engine() { for (Controller* toDelete: controllers) delete toDelete; }

    /*
     * @brief start the engine processing thread
     *
     */
    void execute() { if (!isActive()) execution(); }
    /*
     * @brief stop the engine processing thread
     *
     */
    void shutdown() { isExecuted = false; }
    /*
     * @brief shows whether the engine is running
     *
     * @return is the engine running now
     */
    bool isActive() const { return isExecuted || isRunning; }

protected:
    /*
     * @brief implementation of the execute method
     *
     */
    virtual void execution();
    /*
     * @brief triggers one event update cycle
     *
     * @param deltaTime amount of time that has passed since the last update
     */
    void update(float deltaTime);

private:
    void initialization();

};


#endif //DUNGEONOFDESPAIR_ENGINE_H
