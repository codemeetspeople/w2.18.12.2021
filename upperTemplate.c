#include <stdio.h>

// task.in content: abc123ABC!opop&#123!alphaBRAVO
// expected task.out content: ABC123ABC!OPOP&#123!ALPHABRAVO

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char symbol;

    for ( ; fscanf(in, "%c", &symbol) != EOF ; ) {
        // your powerful code here
        fprintf(out, "%c", symbol);
    }

    fclose(in);
    fclose(out);

    return 0;
}
