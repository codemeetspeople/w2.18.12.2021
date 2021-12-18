#include <stdio.h>

void buffered() {
    int limit = 999;
    char buffer[1000];

    for ( int i = 0, j = 0; i < 10000000; i++, j++) {
        buffer[j] = 'a';

        if ( j == limit ) {
            printf("%s", buffer);
            j = 0;
        }
    }
}

void raw() {
    for ( int i = 0; i < 10000000; i++) {
        printf("a");
    }
}

int main() {
    // raw();
    buffered();

    return 0;
}
