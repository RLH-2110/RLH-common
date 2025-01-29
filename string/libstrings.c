#include "../int.h"

int str_compare(char* a, char* b) {
	if (a == 0 && b == 0)
		return 0;
	if (a == 0 || b == 0)
		return 0xff;
	return strcmp(a, b);
}

uint8 strlen8(char* start){
	char* curr = start;

	if (curr == NULL){
		errno = EINVAL;
		return 0;
	}

	while(*curr != '\0')
		curr++;
	
	if (curr - start > 0xFF){ /* bigger than uint8?*/
		errno = EOVERFLOW;
		return 0;
	}
	return curr - start;
}

uint16 strlen16(char* start){
	char* curr = start;

	if (curr == NULL){
		errno = EINVAL;
		return 0;
	}

	while(*curr != '\0')
		curr++;
	
	if (curr - start > 0xFFFF){ /* bigger than uint16?*/
		errno = EOVERFLOW;
		return 0;
	}
	return curr - start;
}

uint32 strlen32(char* start){
	char* curr = start;

	if (curr == NULL){
		errno = EINVAL;
		return 0;
	}

	while(*curr != '\0')
		curr++;
	
	if (curr - start > 0xFFFFFFFF){ /* bigger than uint32?*/
		errno = EOVERFLOW;
		return 0;
	}
	return curr - start;
}

uint64 strlen64(char* start){
	char* curr = start;

	if (curr == NULL){
		errno = EINVAL;
		return 0;
	}

	while(*curr != '\0')
		curr++;
	
	if (curr - start > 0xFFFFFFFFFFFFFFFF){ /* bigger than uint64?*/
		errno = EOVERFLOW;
		return 0;
	}
	return curr - start;
}