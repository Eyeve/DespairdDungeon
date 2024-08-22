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
    Session session;
    EventHandler eventHandler;
    std::unordered_set<Controller*> controllers;
    std::unordered_set<Entity*> updatable;
private:
    bool isRunning;

public:
    Engine(): eventHandler(EventHandler(session)), isRunning(false) { initialization(); }
    ~Engine() {}

    /*
     * @brief start the engine processing thread
     *
     */
    void execute() { if (!isRunning) execution(); }
    /*
     * @brief stop the engine processing thread
     *
     */
    void shutdown() { isRunning = false; }
    /*
     * @brief shows whether the engine is running
     *
     * @return is the engine running now
     */
    bool isExecuted() const { return isRunning; }

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
