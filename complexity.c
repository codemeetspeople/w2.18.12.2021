#include <stdio.h>

void bench1(int n) { // O(N)
    int counter = 0;

    for ( int i = 0; i < n; i++ ) {
        counter += 1;
    }
    printf("bench1(%d) - %d iterations\n", n, counter);
}

void bench2(int n) { // O(N)
    int counter = 0;

    for ( int i = -n; i < n; i++ ) {
        counter += 1;
    }
    printf("bench2(%d) - %d iterations\n", n, counter);
}

void bench3(int n) { // O(N)
    int counter = 0;

    for ( int i = 0; i < n; i += 42 ) {
        counter += 1;
    }
    printf("bench3(%d) - %d iterations\n", n, counter);
}

void bench4(int n) { // O(1)
    int counter = 0;

    for ( int i = 0; i < n % 1987; i++ ) {
        counter += 1;
    }
    printf("bench4(%d) - %d iterations\n", n, counter);
}

void bench5(int n) { // O(1)
    int counter = 0;

    for ( int i = 0; i < 10; i++ ) {
        counter += 1;
    }
    printf("bench5(%d) - %d iterations\n", n, counter);
}

void bench6(int n) { // O(1) / O(inf)
    int counter = 0;

    for ( int i = 0; i < n; i += n / 2 ) {
        counter += 1;
    }
    printf("bench6(%d) - %d iterations\n", n, counter);
}

void bench7(int n) { // O(logN)
    int counter = 0;

    for ( int i = n; i > 0; i /= 2 ) {
        counter += 1;
    }
    printf("bench7(%d) - %d iterations\n", n, counter);
}

void bench8(int n) { // O(logN)
    int counter = 0;

    for ( int i = 1; i < n; i *= 2 ) {
        counter += 1;
    }
    printf("bench8(%d) - %d iterations\n", n, counter);
}

void bench9(int n) { // O(N^2)
    int counter = 0;

    for ( int i = 0; i < n; i++ ) { // O(N)
        for ( int j = 0; j < n; j++ ) { // O(N)
            counter += 1;
        }
    }
    printf("bench9(%d) - %d iterations\n", n, counter);
}

void bench10(int n) { // O(N^2)
    int counter = 0;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < i; j++ ) {
            counter += 1;
        }
    }
    printf("bench10(%d) - %d iterations\n", n, counter);
}

void bench11(int n) { // O(NlogN)
    int counter = 0;

    for ( int i = 0; i < n; i++ ) { // O(N)
        for ( int j = i; j > 0 ; j /= 2 ) { // O(logN)
            counter += 1;
        }
    }
    printf("bench11(%d) - %d iterations\n", n, counter);
}


void rbench1(int n, int* counter) { // O (N^2)
    if ( n == 0 ) {
        *counter += 1;
        return;
    }
    for ( int i = 0; i < n; i++ ) {
        *counter += 1;
    }
    rbench1(n-1, counter);
    *counter += 1;
}

void rbench2(int n, int* counter) {
    if ( n == 0 ) {
        *counter += 1;
        return;
    }
    rbench2(n/2, counter);
    *counter += 1;
}

void rbench3(int n, int* counter) {
    if ( n == 0 ) {
        *counter += 1;
        return;
    }

    for ( int i = n; i > 0; i /= 2 ) {
        *counter += 1;
    }

    rbench3(n/2, counter);
    *counter += 1;
}


int rbench4(int n, int* counter) { // O(2^N)
    if ( n <= 1 ) {
        *counter += 1;
        return 1;
    }

    *counter += 1;
    return rbench4(n-1, counter) + rbench4(n-2, counter);
}

int rbench5(int n, int* counter) { // O(2^log2N) = O(N)
    if ( n <= 1 ) {
        *counter += 1;
        return 1;
    }

    *counter += 1;
    return rbench5(n/2, counter) + rbench5(n/2, counter);
}


int main() {
    // bench1(LIMIT);
    // bench2(LIMIT);
    // bench3(LIMIT);
    // bench4(LIMIT);
    // bench5(LIMIT);
    // if ( LIMIT > 1 ) {
    //     bench6(LIMIT);
    // }
    // bench7(LIMIT);
    // bench8(LIMIT);
    // if ( LIMIT <= 10000 ) {
    //     bench9(LIMIT);
    //     bench10(LIMIT);
    // }
    // bench11(LIMIT);
    int c = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    if ( LIMIT <= 10000 ) {
        rbench1(LIMIT, &c);
        printf("rbench1(%d) - %d iterations\n", LIMIT, c);
    }
    rbench2(LIMIT, &c2);
    printf("rbench2(%d) - %d iterations\n", LIMIT, c2);
    rbench3(LIMIT, &c3);
    printf("rbench3(%d) - %d iterations\n", LIMIT, c3);

    if ( LIMIT <= 46 ) {
        rbench4(LIMIT, &c4);
        printf("rbench4(%d) - %d iterations\n", LIMIT, c4);
    }
    rbench5(LIMIT, &c5);
    printf("rbench4(%d) - %d iterations\n", LIMIT, c5);

    return 0;
}
