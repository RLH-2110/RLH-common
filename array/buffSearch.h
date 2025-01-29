#ifndef included_buffsearch_h
#define included_buffsearch_h

#include "../int.h"
/*
	searches for a char of an array staring at start_index.
	due to the error handleing, you can not find out if anything exist at index 0

	buff: the buffer to search
	length: the length of the buffer
	start_index: at what index the search stats
	find: the character we want to find

	return:
		0: there was an error
		other: the index where the char was found.
*/
uint32 findInBuffChr(unsigned char* buff, uint32 length, uint32 start_index, char find);

/*
	searches for a string of an array staring at start_index.
	due to the error handleing, you can not find out if anything exist at index 0

	buff: the buffer to search
	length: the length of the buffer
	start_index: at what index the search stats
	find: the string we want to find

	return:
		0: there was an error
		other: the index where the char was found.
*/
uint32 findInBuffStr(unsigned char* buff, uint32 length, uint32 start_index, char* find);

/* included_buffsearch_h */
#endif