#include <stdio.h>

int main() {
    char symbol = 'a'; // 97
    int offset = 'a' - 'A'; // 97 - 65 = 32

    //         i = 97 ; i <= 123; i++
    for ( char i = 'a'; i <= 'z'; i++ ) {
        printf("%c", i - offset);
    }
    printf("\n");


    //         i = 65 ; i <= 91 ; i++
    for ( char i = 'A'; i <= 'Z'; i++ ) {
        printf("%c", i + offset);
    }
    printf("\n");

    return 0;
}