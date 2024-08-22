#ifndef DUNGEONOFDESPAIR_CHUNKCORDS_H
#define DUNGEONOFDESPAIR_CHUNKCORDS_H

#include <functional>

template<typename T>
struct Cords;

template<typename T>
struct ChunkCords {

    T x;
    T y;

    ChunkCords(T x = 0, T y = 0): x(x), y(y) {}
    ~ChunkCords() {}

    T getX() const { return x; }
    T getY() const { return y; }

    bool operator==(const ChunkCords<T>& other) const { return x == other.x && y == other.y; }
    operator Cords<T>() const;
};

namespace std {
    template<typename T>
    struct hash<ChunkCords<T>> {
    std::size_t operator()(const ChunkCords<T>& cords) const {
        auto h1 = std::hash<T>{}(cords.getX());
        auto h2 = std::hash<T>{}(cords.getY());
        return h1 ^ (h2 << 1);
    }
};
}


#endif //DUNGEONOFDESPAIR_CHUNKCORDS_H
