#ifndef TLPI_HDR_H

#define TLPI_HDR_H  /* Prevent accidental double inclusion */
#include <sys/types.h>  /* Type definitions used by many programs */
/* Standard I/O functions */
#include <stdio.h>
/* Prototypes of commonly used library functions,
   plus EXIT_SUCCESS and EXIT_FAILURE constants */
#include <stdlib.h>
 /* Prototypes for many system calls */
#include <unistd.h>
/* Declares errno and defines error constants */
#include <errno.h>
/* Commonly used string-handling functions */
#include <string.h>
/* Declares our functions for handling numeric arguments (getInt(), getLong())
#include "get_num.h"
/* Declares our error-handling functions
#include "error_functions.h" */
typedef enum { FALSE, TRUE } Boolean;
#define min(m,n) ((m) < (n) ? (m) : (n))
#define max(m,n) ((m) > (n) ? (m) : (n))
#endif
