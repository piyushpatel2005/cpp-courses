#include <stdio.h>

/* Define swap_counts here. */

int main(void) {
    int a = 4;
    int b = 9;
    swap_counts(&a, &b);
    printf("A: %d, B: %d\n", a, b);
    return 0;
}
