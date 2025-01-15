#ifndef included_OOM_malloc_h
#define included_OOM_malloc_h

#include "../../int.h"
#include "../../common_defines.h"

/* retruns the ipv4 address as a string, this string is static memory, and will be overwritten with the next call, you do not need to free it
	ip: the ip adress to print

	returns: char* to the string of the ipv4 address
*/
char* IPv4ToString_static(int32 ip);


/* retruns the ipv4 address as a string, but the ipv4 address has its endianness reversed before printing, this string is static memory, and will be overwritten with the next call, you do not need to free it 
	ip: the ip adress to print

	returns: char* to the string of the ipv4 address
	*/
char* IPv4ToStringR_static(int32 ip);


/* retruns the ipv4 address as a string, this string must be freed by the caller!
	ip: the ip adress to print

	returns: char* to the string of the ipv4 address or NULL if out of memory errors occured
*/
CALLER_FREES char* IPv4ToString(int32 ip);



/* retruns the ipv4 address as a string, but the ipv4 address has its endianness reversed before printing, this string must be freed by the caller!
	ip: the ip adress to print

	returns: char* to the string of the ipv4 address or NULL if out of memory errors occured
*/
CALLER_FREES char* IPv4ToStringR(int32 ip);


/* turns an DNS QNAME into a string, the stirng must be freed by the caller!
	qname: char* to the qname to print

	returns: char* to the string of the ipv4 address or NULL if out of memory errors occured
*/
CALLER_FREES char* qnameToString(char* qname);

/* included_OOM_malloc_h */
#endif