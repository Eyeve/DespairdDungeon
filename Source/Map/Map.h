#ifndef DUNGEONOFDESPAIR_MAP_H
#define DUNGEONOFDESPAIR_MAP_H

#include <vector>

#include "Tile.h"


class Map {

    std::vector<std::vector<Tile>> tiles;
    unsigned int weight;
    unsigned int height;

public:
    Map(int weight, int height): weight(weight), height(height) {}

};


#endif //DUNGEONOFDESPAIR_MAP_H
