#ifndef DUNGEONOFDESPAIR_MAPGENERATOR_H
#define DUNGEONOFDESPAIR_MAPGENERATOR_H

#include "Generator.h"
#include "Map.h"


class MapGenerator: public Generator {

public:
    virtual void generate(Map* map) = 0;

};


#endif //DUNGEONOFDESPAIR_MAPGENERATOR_H
