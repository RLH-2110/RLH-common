#ifndef included_buffmanip_h
#define included_buffmanip_h

/* fills values into a buffer from the left while preserving everything before terminatorPostion.
	example: buff { 'h' 'i' '\0' 0x45, 0x79 }
		call: fillBufferLeftMS(buff, 5, ' ' , 2);
		result: { ' ', ' ', h' 'i' '\0' }

		inputs

*/
void fillBufferLeftMS(char* buff, size_t length, char fill ,int terminatorPostion);

void fillBufferLeftAS(char* buff, size_t length, char fill);

/* included_buffmanip_h */
#endif