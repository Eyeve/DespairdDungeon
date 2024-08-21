#ifndef DUNGEONOFDESPAIR_DUNGEONOFDESPAIR_H
#define DUNGEONOFDESPAIR_DUNGEONOFDESPAIR_H

#include "Engine.h"
#include "TestRoomGenerator.h"


class DungeonOfDespair: public Engine {

public:
    DungeonOfDespair() {}
    ~DungeonOfDespair() {}

private:
    void execution() override;

};


#endif //DUNGEONOFDESPAIR_DUNGEONOFDESPAIR_H
