#ifndef DUNGEONOFDESPAIR_CORDS_H
#define DUNGEONOFDESPAIR_CORDS_H

#include <functional>

#include "Config.h"


template<typename T>
struct ChunkCords;

template<typename T>
struct Cords {

    T x;
    T y;

    Cords(T x = 0, T y = 0): x(x), y(y) {}
    ~Cords() {}

    T getX() const { return x; }
    T getY() const { return y; }
    T getXOff() const { return x % CHUNK_SIDE; }
    T getYOff() const { return y % CHUNK_SIDE; }

    bool operator==(const Cords<T>& other) const { return x == other.x && y == other.y; }
    operator ChunkCords<T>() const;
};

namespace std {
    template<typename T>
    struct hash<Cords<T>> {
        std::size_t operator()(const Cords<T>& cords) const {
            auto h1 = std::hash<T>{}(cords.getX());
            auto h2 = std::hash<T>{}(cords.getY());
            return h1 ^ (h2 << 1);
        }
    };
}


#endif //DUNGEONOFDESPAIR_CORDS_H
