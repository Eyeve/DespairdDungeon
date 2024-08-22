#ifndef DUNGEONOFDESPAIR_SESSION_H
#define DUNGEONOFDESPAIR_SESSION_H

#include "Map.h"
#include "MapGenerator.h"
#include "Entity.h"


struct Session {

    using EntityMap = std::unordered_map<Cords<int>, Entity*>;

    EntityMap entities;
    Map* map;
    MapGenerator* mapGenerator;

public:
    Session(): map(nullptr), mapGenerator(nullptr) {}
    ~Session() {
        delete map;
        delete mapGenerator;
    }
};

#endif //DUNGEONOFDESPAIR_SESSION_H
