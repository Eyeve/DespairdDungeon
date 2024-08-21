#ifndef DUNGEONOFDESPAIR_POSITION_H
#define DUNGEONOFDESPAIR_POSITION_H


class Position {
    int x;
    int y;

public:
    Position(int x = 0, int y = 0): x(x), y(y) {}
    ~Position() {}

    int getX() const { return x; }
    int getY() const { return y; }
};


#endif //DUNGEONOFDESPAIR_POSITION_H
