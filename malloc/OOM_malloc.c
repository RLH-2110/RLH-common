#include <stdlib.h>
#include "../common_defines.h"

void* OOMmalloc_exit(size_t size) {
	void* p = malloc(size);
	if (p == 0) {
		puts("out of memory");
		exit(EXIT_FAILURE);
	}
}

