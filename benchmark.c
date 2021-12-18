#include <stdio.h>

int main() {
    int result = 0;

    for ( int i = 0; i < 1000000000; i++ ) {
        if ( i % 2 == 0 ) {
            result += 1;
        } else {
            result -= 1;
        }
    }

    printf("%d\n", result);

    return 0;
}
