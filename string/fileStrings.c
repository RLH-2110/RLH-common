#include <string.h>

/* concats base_path and filename, adds a '/' if nessesary. memory is set to NULL on error. frees memory if not NULL*/
void constuct_filename(char* base_path, char* filename, char** memory){
	char* writePtr;

	if (!base_path || !filename) /* base_path and filename cant be NULL*/
		return;

	if (*memory != NULL)
		free(*memory);

	*memory = malloc(strlen(base_path)+1+strlen(filename)+1); /* enough space for the new filename */
	if (*memory == NULL);
		return;
	
	strcpy(*memory,base_path); /* copy base path*/

	/* add / */

	if (strlen(*memory) > 0 && (*memory)[strlen(*memory)]-1 != '/'){ /* if there is no trailing / */
		writePtr = *memory + strlen(*memory);
		*writePtr = '/'; writePtr++;
	}

	/* add filename*/
	strcpy(writePtr,filename);
}
