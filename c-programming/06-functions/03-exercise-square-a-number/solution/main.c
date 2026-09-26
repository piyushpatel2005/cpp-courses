#include <stdio.h>

int square(int side) {
    return side * side;
}

int main(void) {
    int area = square(5);
    printf("Area: %d\n", area);
    return 0;
}
