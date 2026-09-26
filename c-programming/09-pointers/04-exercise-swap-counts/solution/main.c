#include <stdio.h>

void swap_counts(int *left, int *right) {
    int saved = *left;
    *left = *right;
    *right = saved;
}

int main(void) {
    int a = 4;
    int b = 9;
    swap_counts(&a, &b);
    printf("A: %d, B: %d\n", a, b);
    return 0;
}
