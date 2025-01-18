#include <stdio.h>

#include "common.h"
#include "vm.h"
#include "chunk.h"
#include "debug.h"


int main(int argc, const char* argv[]){

    initVM();

    Chunk chunk;
    initChunk(&chunk);

    int constant = addConstant(&chunk, 6.9);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);

    constant = addConstant(&chunk, 4.5);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);

    writeChunk(&chunk, OP_ADD, 123);

    constant = addConstant(&chunk, 2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);

    writeChunk(&chunk, OP_DIVIDE, 123);

    writeChunk(&chunk, OP_NEGATE, 123);

    writeChunk(&chunk, OP_RETURN, 123);

    interpret(&chunk);

    freeVM();
    freeChunk(&chunk);
    return 0;
} 
