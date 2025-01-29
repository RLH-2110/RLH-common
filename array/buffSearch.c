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
uint32 findInBuffChr(unsigned char* buff, uint32 length, uint32 start_index, char find){
	uint32 i = start_index;

	while(true){
		if (i >= length)
			return 0;

		if (buff[i] == find)
			return i;

		i++;
	}

}

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
uint32 findInBuffStr(unsigned char* buff, uint32 length, uint32 start_index, char* find){
	uint32 strI;
	uint32 hit;
	uint32 buffI = start_index;

	while(true){
		if (buffI >= length)
			return 0;

		if (buff[buffI] == find[0]){
			hit = buffI;

			buffI++;
			strI = 1;
			while(strI < strlen(find)){

				if (buffI >= length)
					return 0;

				if (buff[buffI] != find[strI]){
					break;
				}
				strI++;
				buffI++;
			}

			if (strI == strlen(find))
				return hit;
		}

		buffI++;
	}

}