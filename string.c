#include <stdio.h>

int main() {
    char name[10] = "cai\0man";

    printf("Hello, %s!\n", name);

    return 0;
}