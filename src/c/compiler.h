#ifndef hsclox_compiler_h
#define hsclox_compiler_h

#include "object.h"
#include "vm.h"

ObjFunction* hsCompile(const char* source);
void markCompilerRoots();

#endif
