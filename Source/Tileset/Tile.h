#ifndef DUNGEONOFDESPAIR_TILE_H
#define DUNGEONOFDESPAIR_TILE_H

#include "TileSet.h"

struct Tile {
     TileID ID;
     StructureID structure;

     Tile(): ID(TileID::CAVE), structure(StructureID::STONE) {}
};


#endif //DUNGEONOFDESPAIR_TILE_H
