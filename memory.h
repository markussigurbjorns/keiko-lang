#ifndef keiko_memory_h
#define keiko_memory_h

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity)*2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type)*(oldCount), \
     sizeof(type)*(newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(oldCount), 0)

void* reallocate(void* pointer, size_t oldSize, size_t newSize);


#endif 
