int bench1(int n) {
    if ( n == 0 ) {
        return 1;
    }
    return bench1(n-1) + bench1(n+1);
}

int bench2(int n) {
    if ( n <= 10 ) {
        return 0;
    }
    if ( n < 0 ) {
        return bench2(n+5) + bench2(n+6);
    }
    return bench2(n-3) + bench2(n-4) + n * 7;
}


int bench3(int n) {
    int sum = 1;

    if ( n == 0 ) {
        return 1;
    }
    for ( int i = n; i > 0; i += n % 8 - 15 ) {
        sum += i;
    }
    return sum + bench3(n/10);
}

int bench4(int n) {
    int result = 0;

    if ( n > 0 ) {
        return n;
    }
    for ( int i = 0; i > n; i++ ) {
        result += n;
    }
    return result;
}

int bench5(int n) {
    int result = 1;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = i; j > 0; j-- ) {
            result *= i + j;
        }
    }
    return result;
}

int bench6(int n) {
    int result = n;

    if ( n <= 0 ) {
        return 1;
    }
    return bench6(n-3) + bench6(n-2);
}

int bench7(int n) {
    if ( n < 0 ) {
        return bench7(-n+1);
    }
    return n / 2 + bench7(n-1);
}

int bench8(int n) { // O(N^3)
    int result = 0;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = i; j > 0; j-- ) {
            for ( int k = 0; k < j; k++ ) {
                result += k;
            }
        }
    }
    return result;
}

int bench9(int n) {
    if ( n == 0 ) {
        return 0;
    }
    return n / 3 + bench9(n/2);
}

int bench10(int n) {
    int result = 1;

    if ( n <= 0 ) {
        return 1;
    }
    for ( int i = 1; i < n; i <<= 2 ) {
        result += i;
    }
    return result + bench10(n-1);
}

int bench42(int n) {
    if ( n < 42 ) {
        return 42;
    }
    return n % 42 + bench42(n-42);
}

int bench12(int n) {
    if ( n <= 100 ) {
        return 12;
    }
    return bench12(n%33);
}

int bench13(int n) {
    int result = 0;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            for ( k = 0; k < n; k++ ) {
                result += k;
            }
        }
    }
    return result;
}

int bench14(int n) {
    int result = 1;

    for ( int i = -n; i < n; i += n % 7 + 9 ) {
        for ( int j = i; j > 0; j-- ) {
            result *= i + j;
        }
    }
    return result;
}

int bench15(int n) {
    int result = 0;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = i; j > 0; j++ ) {
            for ( int k = j; k > 0; k++ ) {
                result += k;
            }
        }
    }
    return result;
}

int bench16(int n) {
    if ( n == 0 ) {
        return 0;
    }
    return bench16(n/3) + bench16(n/2);
}

int bench17(int n) {
    if ( n <= 1 ) {
        return 1;
    }
    return bench17(2-n) + bench17(1-n);
}

int bench18(int n) {
    int result = 1;

    if ( n <= 0 ) {
        return 1;
    }
    for ( int i = 1; i < n; i += 7 ) {
        result += i;
    }
    return result + bench18(n/7);
}

int bench19(int n) {
    if ( n == 0 ) {
        return n << 3;
    }
    if ( n < 0 ) {
        return bench19(-n*25);
    }
    return bench19(n/2);
}

int bench20(int n) {
    int result = 1;

    if ( n <= 0 ) {
        return n;
    }
    for ( int i = 0; i < n; i++ ) {
        for ( int j = i; j > 0; j-- ) {
            result *= i + j;
        }
    }
    return result + bench20(n-5);
}

int bench21(int n) {
    if ( n <= 0 ) {
        return n;
    }
    return bench21(n/5) + bench21(~n);
}

int bench22(int n) {
    if ( n == 0 ) {
        return 1;
    }
    if ( n < 0 ) {
        return bench22(n+1) + bench22(-n-1);
    }
    return bench22(n-1) + bench22(-n+1);
}

int bench23(int n) {
    if ( n <= 0 ) {
        return 1;
    }
    return bench23(n-1) + bench23(-n+1);
}

int bench24(int n) {
    int result = 1;

    if ( n <= 0 ) {
        return 1;
    }
    for ( int i = 1; i < n; i += 7 ) {
        result += i;
    }
    return result + bench24(n-42);
}

int bench25(int n) {
    int limit = n * n % 42;
    int sum = 0;

    for ( int i = 0; i < limit * n; i++ ) {
        sum += i;
    }
    return sum;
}
