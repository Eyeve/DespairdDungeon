#include "DungeonOfDespair.h"

void DungeonOfDespair::execution() {
    delete session.mapGenerator;
    session.mapGenerator = static_cast<MapGenerator*>(new TestRoomGenerator());
    session.mapGenerator->generate(session.map);

    Engine::execution();
}