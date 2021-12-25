#include <stdio.h>


int main() {
    // printf("%d\n", !1000001);
    // printf("%d\n", !0);

    int x = 0;

    x = x | 1;

    printf("%d\n", x);

    x = x | 64;

    printf("%d\n", x);

    x = x & 64;
    printf("%d\n", x);

    printf("%d\n", ~(-1459058671));


    for ( int i = 0; i <= 10; i++ ) {
        printf("2^%d = %d\n", i, 1<<i);
    }

    for ( int i = 0; i <= 10; i++ ) {
        printf("%d\n", 1024>>i);
    }


    return 0;
}