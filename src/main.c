#include <stdio.h>
#include "salloc/salloc.h"

int main (){
    char *test = salloc(10);

    test[0] = 'c';
    test[1] = 'a';

    sfree(test);

    printf("%s\n", test);

    return 0;
}