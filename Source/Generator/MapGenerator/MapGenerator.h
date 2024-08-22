#ifndef DUNGEONOFDESPAIR_MAPGENERATOR_H
#define DUNGEONOFDESPAIR_MAPGENERATOR_H

#include "Generator.h"
#include "Map.h"


class MapGenerator: public Generator {

public:
    void generate(Map* map) { generation(map, map->chunks); }

protected:
    virtual void generation(Map* map, Map::ChunkMap& chunks) = 0;

};


#endif //DUNGEONOFDESPAIR_MAPGENERATOR_H
