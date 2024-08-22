#ifndef DUNGEONOFDESPAIR_CHUNK_H
#define DUNGEONOFDESPAIR_CHUNK_H

#include "Tile.h"
#include "Config.h"

struct Chunk {

    Tile tiles[CHUNK_SIDE][CHUNK_SIDE];

    Chunk() {}
    ~Chunk() {}
};


#endif //DUNGEONOFDESPAIR_CHUNK_H
