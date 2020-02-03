#include "core/common.h"
#include "core/chunk.h"
#include "debugger/debug.h"

int main(int argc, const char* argv[]) {
	Chunk chunk;
	initChunk(&chunk);
	writeChunk(&chunk, OP_RETURN);

	disassembleChunk(&chunk, "test chunk");
	freeChunk(&chunk);
	return 0;
}
