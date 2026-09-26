#include <stdio.h>

int main(void) {
    int cells = 4;
    double volts = 6.5;
    char grade = 'A';
    printf("Battery %c: %d cells, %.1f V\n", grade, cells, volts);
    return 0;
}
