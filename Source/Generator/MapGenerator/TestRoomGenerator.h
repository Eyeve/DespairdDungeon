#ifndef DUNGEONOFDESPAIR_TESTROOMGENERATOR_H
#define DUNGEONOFDESPAIR_TESTROOMGENERATOR_H

#include "MapGenerator.h"


class TestRoomGenerator: public MapGenerator {

public:
    TestRoomGenerator() {}
    ~TestRoomGenerator() {}

    void generate(Map* map) override;
};


#endif //DUNGEONOFDESPAIR_TESTROOMGENERATOR_H
