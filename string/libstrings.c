#ifndef included_libstrings_h
#define included_libstrings_h


int str_compare(char* a, char* b) {
	if (a == 0 && b == 0)
		return 0;
	if (a == 0 || b == 0)
		return 0xff;
	return strcmp(a, b);
}

/* libstrings_h */
#endif