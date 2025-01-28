#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../../int.h"
#include "../../common_defines.h"
#include "../../malloc/OOM_malloc.h"
#include "../../Integer/bytemanip.h"


char IPV4_STRING_MEMORY_OWNER[] = "000.000.000.000";

char* IPv4ToString_static(int32 ip) {

	sprintf(IPV4_STRING_MEMORY_OWNER, "%d.%d.%d.%d", (ip & 0xFF000000) >> 24, (ip & 0x00FF0000) >> 16, (ip & 0x0000FF00) >> 8, ip & 0x000000FF);
	return IPV4_STRING_MEMORY_OWNER;
}
char* IPv4ToStringR_static(int32 ip) {

	int32 neoIP = int32_reverseEndian(ip); /* reverse it */
	return IPv4ToString_static(neoIP);
}


CALLER_FREES char* IPv4ToString(int32 ip){

	char* str; OOMmalloc_retnull(4 * 4, str); /* 4*4, because it is 4 times maximal 3 digits plus a seperator or NULL*/

	sprintf(str,"%d.%d.%d.%d", (ip & 0xFF000000) >> 24 , (ip & 0x00FF0000) >> 16, (ip & 0x0000FF00) >> 8, ip & 0x000000FF);
	return str;
}
CALLER_FREES char* IPv4ToStringR(int32 ip){

	int32 neoIP = int32_reverseEndian(ip); /* reverse it */
	return IPv4ToString(neoIP);
}



CALLER_FREES char* qnameToString(char* qname) {

	char* result;
	int state = 0;
	unsigned char length;
	char* buff;
	unsigned int i;

	char* resultp;

	if (qname == NULL) {
		OOMmalloc_retnull(5, result);
		strcpy(result, "NULL");
		return result;
	}
	if (*qname == 0) {
		OOMmalloc_retnull(1,result);
		strcpy(result, "");
		return result;
	}

	OOMmalloc_retnull(strlen(qname) * 3, result);
	resultp = result;
	OOMmalloc_retnull(4, buff);

	while (*qname != 0) {

		switch (state)
		{
		case 0:
			length = *qname;
			sprintf(buff, "%d", length);

			for (i = 0;i < strlen(buff);i++)
				*resultp++ = buff[i];

			state = 1;
			break;
		case 1:
			*resultp = *qname;
			resultp++;
			if (--length == 0)
				state = 0;
		}
		qname++;
	}
	*resultp = 0;
	return result;
}