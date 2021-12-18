#include <stdio.h>

int readStr(FILE *in, char str[]) {
    int length = 0;

    for ( ; fscanf(in, "%c", &str[length]) != EOF; length++ );
    return length;
}

void strRev(char str[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        char tmp = str[i];

        str[i] = str[j];
        str[j] = tmp;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    char str[100];
    int length = readStr(in, str);

    strRev(str, length);
    printf("%s is %d symbols\n", str, length);

    return 0;
}
