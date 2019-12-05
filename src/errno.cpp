/* For full ANSI compliance of global variable */

#include "proj.h"
#include "proj_internal.h"

int pj_errno = 0;

int *pj_get_errno_ref() {
    return &pj_errno;
}

int pj_get_errno() {
   return pj_errno;
}

/* end */
