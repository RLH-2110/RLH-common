#ifndef flagsH
#define flagsH

#include "../int.h"

/* This file handles the command line flags */


extern uint32 argumentFlags; /* the flags that are set with the command line! */

/* help flag*/
#define ARGPARSE_FLAGS_H 0x00000001

/* test arg */
#define ARGPARSE_FLAGS_T 0x00000002

/* list of filenames */
extern char** filenames;
extern int filenamesC;
#define ARGPARSE_FLAGS_F 0x00000004



#endif

