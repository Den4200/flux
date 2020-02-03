#ifndef flux_debug_h
#define flux_debug_h

#include "../chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif
