#ifndef DUNGEONOFDESPAIR_TESTROOMGENERATOR_H
#define DUNGEONOFDESPAIR_TESTROOMGENERATOR_H

#include "MapGenerator.h"


class TestRoomGenerator: public MapGenerator {

    constexpr static int roomChunkSize = 2;

public:
    TestRoomGenerator() {}
    ~TestRoomGenerator() {}

protected:
    void generation(Map* map, Map::ChunkMap& chunks) override;
};


#endif //DUNGEONOFDESPAIR_TESTROOMGENERATOR_H
