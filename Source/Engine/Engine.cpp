#include "Engine.h"

void Engine::execute() {
    using clock = std::chrono::steady_clock;
    using timePoint = std::chrono::time_point<clock>;
    using duration = std::chrono::duration<float, std::milli>;

    std::chrono::duration<float, std::milli> deltaTime(0);
    isRunning = true;

    while (isRunning) {
        timePoint start = clock::now();
        update(deltaTime.count());
        deltaTime = clock::now() - start;
    }
}
