#ifndef DUNGEONOFDESPAIR_DIRECTION_H
#define DUNGEONOFDESPAIR_DIRECTION_H


enum Direction: unsigned char {
    NONE        = 0b0000,
    UP          = 0b1000,
    RIGHT       = 0b0100,
    DOWN        = 0b0010,
    LEFT        = 0b0001,
    UP_RIGHT    = UP | RIGHT,
    UP_LEFT     = UP | LEFT,
    DOWN_RIGHT  = DOWN | RIGHT,
    DOWN_LEFT   = DOWN | LEFT,
};

#endif //DUNGEONOFDESPAIR_DIRECTION_H
