#include <stdio.h>

int main(void) {
    int ratings[] = {3, 4, 5};
    int total = 0;
    size_t count = sizeof ratings / sizeof ratings[0];
    for (size_t i = 0; i < count; i++) {
        total += ratings[i];
    }
    printf("Average: %.1f\n", (double) total / count);
    return 0;
}
