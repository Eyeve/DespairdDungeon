#ifndef DUNGEONOFDESPAIR_TILESET_H
#define DUNGEONOFDESPAIR_TILESET_H

#define DELETE_COLLIDER(ID) \
template<> \
inline bool isCollide<ID>() { return false; }

enum TileID {
    CAVE,
};

enum StructureID {
    AIR,
    STONE,
};

template<StructureID ID>
inline bool isCollide() { return true; }

DELETE_COLLIDER(AIR)

#endif //DUNGEONOFDESPAIR_TILESET_H
