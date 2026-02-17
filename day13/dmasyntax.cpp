//Dynamic memory allocation
malloc()
calloc()

realloc()

free()

proto-types 
	stdlib.h
	void* malloc(size_t numBytes);
	void* calloc(size_t numBlocks, size_t blockSize);
	void* realloc(void* oldBlock, size_t numBytes);
	
	void free(void* memBlock);