#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int value;

    for ( ; fscanf(in, "%d", &value) != EOF ; ) {
        fprintf(out, "%d\n", value);
    }

    fclose(in);
    fclose(out);

    return 0;
}

