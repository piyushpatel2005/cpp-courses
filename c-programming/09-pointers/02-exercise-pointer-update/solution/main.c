#include <stdio.h>

int main(void) {
    int stock = 7;
    int *position = &stock;
    *position += 4;
    printf("Stock: %d\n", stock);
    return 0;
}
