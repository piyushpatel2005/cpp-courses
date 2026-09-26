#include <stdio.h>
#include <stdlib.h>
struct Part { int count; };
int main(void) {
    size_t n = 3;
    struct Part *parts = malloc(n * sizeof *parts);
    if (parts == NULL) return 1;
    parts[0].count = 1;
    parts[1].count = 2;
    parts[2].count = 4;
    printf("Parts: %d\n", parts[0].count + parts[1].count + parts[2].count);
    free(parts);
    return 0;
}
