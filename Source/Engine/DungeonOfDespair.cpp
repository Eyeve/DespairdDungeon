#include "DungeonOfDespair.h"
#include "Player.h"


void DungeonOfDespair::execution() {
    delete session.map;
    session.map = new Map();

    delete session.mapGenerator;
    session.mapGenerator = static_cast<MapGenerator*>(new TestRoomGenerator());
    session.mapGenerator->generate(session.map);

    session.entities.clear();
    createHero();
    Engine::execution();
}

void DungeonOfDespair::createHero() {
    Player* player = new Player();

    Creature* hero = new Creature(player, nullptr, Cords<int>(20, 20), nullptr);
    controllers.insert(player);
    playerEntities.insert(hero);;
}

