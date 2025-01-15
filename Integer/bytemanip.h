#ifndef included_bytemanip_h
#define included_bytemanip_h


#include "../int.h"

/* reverses the byte order of a 16 bit integer */
uint16 int16_reverseEndian(uint16 in);

/* reverses the byte order of a 32 bit integer */
uint32 int32_reverseEndian(uint32 in);

#ifdef 64BITS
/* reverses the byte order of a 64 bit integer */
uint64 int64_reverseEndian(uint64 in);
#endif


/* included_bytemanip_h */
#endif


