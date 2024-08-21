#include <thread>

#include "DungeonOfDespair.h"

#define SUCCESS 0

int main() {
    DungeonOfDespair dungeonOfDespair;

    std::thread engineThread(&DungeonOfDespair::execute, &dungeonOfDespair );
    engineThread.detach();

    std::this_thread::sleep_for(std::chrono::seconds(3));
    if (dungeonOfDespair.isExecuted()) {
        dungeonOfDespair.shutdown();
    }

    return SUCCESS;
}
