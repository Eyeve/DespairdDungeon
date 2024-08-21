#include "Engine.h"

void Engine::execute() {
    using clock = std::chrono::steady_clock;
    using timePoint = std::chrono::time_point<clock>;
    using duration = std::chrono::duration<float, std::milli>;

    if (isRunning) {
        return;
    }

    std::chrono::duration<float, std::milli> deltaTime(0);
    isRunning = true;

    while (isRunning) {
        timePoint start = clock::now();
        update(deltaTime.count());
        deltaTime = clock::now() - start;
    }
}

void Engine::update(float deltaTime) {
    eventHandler.setDeltaTime(deltaTime);

    for (Controller* controller: controllers) {
        eventHandler.process(controller->tick());
    }
    for (Entity* toUpdate: updatable) {
        eventHandler.update(toUpdate);
    }
}
