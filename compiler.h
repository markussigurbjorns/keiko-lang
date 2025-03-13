#ifndef keiko_compiler_h
#define keiko_compiler_h

#include "vm.h"
#include "object.h"

ObjFunction* compile(const char* source);

#endif
