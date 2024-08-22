#include "ChunkCords.h"
#include "Cords.h"
#include "Config.h"

template <typename T>
ChunkCords<T>::operator Cords<T>() const {
    return Cords<T>(x * CHUNK_SIDE, y * CHUNK_SIDE);
}
