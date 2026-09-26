#include <stdio.h>

int main(void) {
    int desk = 3;
    switch (desk) {
        case 1: printf("Information\n"); break;
        case 2: printf("Bookings\n"); break;
        case 3: printf("Repairs\n"); break;
        default: printf("Unknown desk\n"); break;
    }
    return 0;
}
