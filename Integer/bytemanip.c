#include "../int.h"


uint16 int16_reverseEndian(uint16 in) {
	return (in >> 8) | (uint16)(in << 8);
}

uint32 int32_reverseEndian(uint32 in) {
	int8* resultptr;
	int8* inptr;
	int32 result = 0;
	
	resultptr = &result;
	inptr = &in;

	/* maybe bitshift magic is faster, but this here is easier to write and debug*/
	resultptr[0] = inptr[3];
	resultptr[1] = inptr[2];
	resultptr[2] = inptr[1];
	resultptr[3] = inptr[0];

	return result;
}

#ifdef BITS64
	uint64 int64_reverseEndian(uint64 in) {
		int8* resultptr;
		int8* inptr;
		int64 result = 0;

		resultptr = &result;
		inptr = &in;

		/* maybe bitshift magic is faster, but this here is easier to write and debug*/
		resultptr[0] = inptr[7];
		resultptr[1] = inptr[6];
		resultptr[2] = inptr[5];
		resultptr[3] = inptr[4];
		resultptr[4] = inptr[3];
		resultptr[5] = inptr[2];
		resultptr[6] = inptr[1];
		resultptr[7] = inptr[0];

		return result;
	}
#endif
