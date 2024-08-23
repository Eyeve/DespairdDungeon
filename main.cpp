#include <thread>

#include "DungeonOfDespair.h"
#include "Tests.h"

#define SUCCESS 0

int main(int argc, char* argv[]) {
    return DoDtests::testUI(argc, argv);

    DungeonOfDespair dungeonOfDespair;

    std::thread engineThread(&DungeonOfDespair::execute, &dungeonOfDespair);
    engineThread.detach();

    std::this_thread::sleep_for(std::chrono::seconds(3));
    dungeonOfDespair.shutdown();

    while (dungeonOfDespair.isActive()) {
        std::chrono::seconds(1);
    }
    return SUCCESS;
}
