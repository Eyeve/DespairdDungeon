#ifndef DUNGEONOFDESPAIR_CHUNK_H
#define DUNGEONOFDESPAIR_CHUNK_H

#include "Tile.h"
#include "Config.h"

class Chunk {

    Tile tiles[CHUNK_SIDE][CHUNK_SIDE];

public:
    Chunk() {}
    ~Chunk() {}

};


#endif //DUNGEONOFDESPAIR_CHUNK_H
