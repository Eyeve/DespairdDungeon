#include "Cords.h"
#include "ChunkCords.h"


template <typename T>
Cords<T>::operator ChunkCords<T>() const {
    return ChunkCords<T>(x / CHUNK_SIDE, y / CHUNK_SIDE);
}
