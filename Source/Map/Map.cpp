#include "Map.h"


void Map::initialization() {
    for (int x = 0; x < weight; ++x) {
        for (int y = 0; y < height; ++y) {
            // Generate new empty chunk
            chunks[ChunkCords<int>(x, y)];
        }
    }
}

void Map::refresh(unsigned int w, unsigned int h) {
    weight = w;
    height = h;
    chunks.clear();
    initialization();
}