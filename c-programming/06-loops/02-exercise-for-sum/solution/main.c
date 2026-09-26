#include <stdio.h>

int main(void) {
    int total = 0;
    for (int day = 1; day <= 5; day++) {
        total += day;
    }
    printf("Collected: %d\n", total);
    return 0;
}
