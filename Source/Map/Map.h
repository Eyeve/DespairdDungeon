#ifndef DUNGEONOFDESPAIR_MAP_H
#define DUNGEONOFDESPAIR_MAP_H

#include <unordered_map>

#include "ChunkCords.h"
#include "Chunk.h"


class MapGenerator;

class Map {

public:
    using ChunkMap = std::unordered_map<ChunkCords<int>, Chunk>;
    friend MapGenerator;

protected:
    ChunkMap chunks;
    unsigned int weight;
    unsigned int height;

public:
    Map(unsigned int weight = 0, unsigned int height = 0): weight(weight), height(height) { initialization(); }

    void refresh(unsigned int w, unsigned int h);

private:
    void initialization();

};


#endif //DUNGEONOFDESPAIR_MAP_H
