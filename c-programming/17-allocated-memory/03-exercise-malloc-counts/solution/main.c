#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 3;
    int *counts = malloc(n * sizeof *counts);
    if (counts == NULL) {
        return 1;
    }
    counts[0] = 2;
    counts[1] = 5;
    counts[2] = 7;
    printf("Repairs: %d\n", counts[0] + counts[1] + counts[2]);
    free(counts);
    return 0;
}
