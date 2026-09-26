#include <stdio.h>

int main(void) {
    int price = 6;
    int quantity = 4;
    int discount = 3;
    int total = price * quantity - discount;
    printf("Total: %d\n", total);
    return 0;
}
