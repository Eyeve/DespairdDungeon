#ifndef DUNGEONOFDESPAIR_CHUNK_H
#define DUNGEONOFDESPAIR_CHUNK_H

#include <unordered_set>

#include "Tile.h"
#include "Config.h"
#include "ColliderEntity.h"


struct Chunk {

    Tile tiles[CHUNK_SIDE][CHUNK_SIDE];
    std::unordered_set<ColliderEntity*> colliderEntities;

    Chunk() {}
    ~Chunk() {}
};


#endif //DUNGEONOFDESPAIR_CHUNK_H
