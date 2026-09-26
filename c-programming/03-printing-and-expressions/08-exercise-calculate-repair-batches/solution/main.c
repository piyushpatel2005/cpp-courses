#include <stdio.h>

int main(void) {
    int trays = 3;
    int per_tray = 2;
    int extra = 2;
    int total = trays * per_tray + extra;
    int whole = total / trays;
    double average = (double) total / trays;
    printf("Reflectors: %d | Whole: %d | Average: %.2f\n", total, whole, average);
    return 0;
}
