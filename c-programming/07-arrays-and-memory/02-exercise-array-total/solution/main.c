#include <stdio.h>

int main(void) {
    int visitors[4] = {2, 5, 6, 7};
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += visitors[i];
    }
    printf("Visitors: %d\n", total);
    return 0;
}
