#ifndef DESPAIRDUNGEON_ENGINE_H
#define DESPAIRDUNGEON_ENGINE_H

#include <iostream>
#include <random>
#include <chrono>


class Engine {

    bool isRunning;

public:
    Engine(): isRunning(true) {}
    ~Engine() {}

    /*
     * @brief start the engine processing thread
     *
     */
    void execute();
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

private:
    /*
     * @brief ...
     *
     * @param amount of time that has passed since the last update
     */
    void update(float deltaTime);

};


#endif //DESPAIRDUNGEON_ENGINE_H
