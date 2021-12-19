#include <stdio.h>

int factorial(int n) {
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    int result = 0;

    for ( int i = 0; i < 50000000; i++ ) {
        int local = factorial(i%10 + 4);

        if ( local % 2 == 0 ) {
            result += 1;
        } else {
            result -= 1;
        }
    }

    printf("%d\n", result);

    return 0;
}
