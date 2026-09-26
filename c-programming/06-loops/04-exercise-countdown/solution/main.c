#include <stdio.h>

int main(void) {
    int remaining = 4;
    while (remaining > 0) {
        printf("%d\n", remaining);
        remaining--;
    }
    printf("Start!\n");
    return 0;
}
