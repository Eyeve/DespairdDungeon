#include "Engine.h"


void Engine::initialization() {

}

void Engine::execution() {
    using clock = std::chrono::steady_clock;
    using timePoint = std::chrono::time_point<clock>;
    using duration = std::chrono::duration<float, std::milli>;

    std::chrono::duration<float, std::milli> deltaTime(0);

    isExecuted = true;
    isRunning = true;
    while (isExecuted) {
        timePoint start = clock::now();
        update(deltaTime.count());
        deltaTime = clock::now() - start;
    }
    isRunning = false;
}

void Engine::update(float deltaTime) {
    eventHandler.setDeltaTime(deltaTime);

    for (Controller* controller: controllers) {
        eventHandler.process(controller->tick());
    }
    for (Entity* playerEntity: playerEntities) {
        eventHandler.update(playerEntity);
    }
}


