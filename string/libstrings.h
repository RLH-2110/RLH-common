#ifndef included_libstrings_h
#define included_libstrings_h

#include "../int.h"

/* compares two strings
	if they are the same, 0 is returned
	if they are not the same, a non-zero value is returned
	
	when both pointers are NULL, 0 is returned
	if only one pointer is NULL, a non-zero value is returned
*/
int str_compare(char* a, char* b);

/* 
	gets the length of the string, excluding the null terminator. (like strlen)

	str: the string you want to get the length of

	returns: the lenght of the string

	errors:
		On errors, 0 is returned and errno is set.
		EINVAL: NULL was passed into str
		EOVERFLOW: the string length can not fit into a 32 bit integer
*/
uint32 strlen32(char* str);

uint16 strlen16(char* str);
uint8 strlen8(char* str);
#ifdef BITS64
	uint64 strlen64(char* str);
/* BITS64 */
#endif 

/* libstrings_h */
#endif