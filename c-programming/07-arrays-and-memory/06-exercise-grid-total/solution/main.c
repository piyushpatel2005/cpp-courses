#include <stdio.h>

int main(void) {
    int tools[2][2] = {{2, 3}, {4, 5}};
    int total = 0;
    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 2; column++) {
            total += tools[row][column];
        }
    }
    printf("Tools: %d\n", total);
    return 0;
}
