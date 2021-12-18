#include <stdio.h>

int arrayScan(FILE *in, int array[], int limit) {
    int len = 0;

    for ( ; len < limit && fscanf(in, "%d", &array[len]) == 1; len++ );
    return len;
}


void arrayPrint(int array[], int size) {
    if ( size <= 0 ) {
        return;
    }

    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    int array[100];

    int result = arrayScan(in, array, 10);
    printf("%d\n", result);
    arrayPrint(array, result);

    return 0;
}
