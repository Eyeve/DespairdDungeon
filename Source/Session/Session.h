#ifndef DUNGEONOFDESPAIR_SESSION_H
#define DUNGEONOFDESPAIR_SESSION_H

#include "Map.h"
#include "MapGenerator.h"

struct Session {

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
