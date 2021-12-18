#include <stdio.h>

void arrayPrint(int *array, int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayIncrement(int *array, int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += 1;
    }
}

void arrayZeroFill(int *array, int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    const int size = 10;
    int array[size];

    arrayZeroFill(array, size);
    arrayPrint(array, size);
    arrayIncrement(array, size);
    arrayPrint(array, size);

    return 0;
}

