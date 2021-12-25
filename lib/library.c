#include "library.h"
#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int increment(int x) {
    return x + 1;
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


// gcc -std=c99 -c library.c
