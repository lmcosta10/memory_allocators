#include "salloc.h"

#define SALLOCSIZE 10000 /* size of available space */

static char allocbuff[SALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuff; /* or &allocbuff[0]; next free position in the allocator */

char *salloc(int n) {
    if (allocbuff + SALLOCSIZE - allocp >= n) { /* is there enough space */
        allocp += n; /* allocatte requested size */
        return allocp - n; /* old pointer */
    }
    else {
        return 0;
    }
}

void sfree(char *p) {
    if (p >= allocbuff && p < allocbuff + SALLOCSIZE)
        allocp = p;
}