#include "dlmalloc/malloc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    #define _1_M 1*1024*1024
    char* buffer = malloc(_1_M);
    mspace *base = create_mspace_with_base(buffer,_1_M,1);
    free(buffer);
    return 0;
}
