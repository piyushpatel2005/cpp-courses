#include <stdio.h>

int main(void) {
    int packs[] = {2, 4, 5, 7};
    int total = 0;
    int *cursor = packs;
    for (size_t i = 0; i < 4; i++) {
        total += *cursor;
        cursor++;
    }
    printf("Capacity: %d\n", total);
    return 0;
}
