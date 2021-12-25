#include <stdio.h>

int factorial(int n) { // O(N)
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }

    return n * factorial(n-1);
}


int not_factorial(int n) { // O(logN)
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }

    return n * factorial(n/2);
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
