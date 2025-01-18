#ifndef keiko_value_h
#define keiko_value_h

#include "common.h"

typedef double Value;


typedef struct {
    int count;
    int capacity;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void freeValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);


#endif
