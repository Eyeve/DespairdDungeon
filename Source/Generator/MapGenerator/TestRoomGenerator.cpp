#include "TestRoomGenerator.h"

void TestRoomGenerator::generation(Map* map, Map::ChunkMap& chunks) {
    Cords<int> chunkCords;
    int chunkLimit = roomChunkSize - 1;
    int limit = CHUNK_SIDE - 1;

    map->refresh(roomChunkSize, roomChunkSize);
    for (chunkCords.x = 0; chunkCords.x < roomChunkSize; ++chunkCords.x) {
        for (chunkCords.y = 0; chunkCords.y < roomChunkSize; ++chunkCords.y) {
            Chunk& selected = chunks[chunkCords];
            for (int x = 0; x < CHUNK_SIDE; ++x) {
                if ((chunkCords.x == 0 && x == 0) || (chunkCords.x == chunkLimit && x == limit)) {
                    continue;
                }
                for (int y = 0; y < CHUNK_SIDE; ++y) {
                    if ((chunkCords.y == 0 && y == 0) || (chunkCords.y == chunkLimit && y == limit)) {
                        continue;
                    }
                    selected.tiles[x][y].structure = StructureID::AIR;
                }
            }
        }
    }
}
