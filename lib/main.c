#include <stdio.h>
#include "library.h"

int main() {
    printf("%d\n", sum(10, 20));

    return 0;
}


// gcc main.c -std=c99 library.o
