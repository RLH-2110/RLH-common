#ifndef included_libstrings_h
#define included_libstrings_h

/* compares two strings
	if they are the same, 0 is returned
	if they are not the same, a non-zero value is returned
	
	when both pointers are NULL, 0 is returned
	if only one pointer is NULL, a non-zero value is returned
*/
int str_compare(char* a, char* b);

/* libstrings_h */
#endif