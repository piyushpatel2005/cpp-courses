#include <stdio.h>
#define TRIPLE(x) ((x) * 3)

int main(void) {
    printf("Parts: %d\n", TRIPLE(2 + 3));
    return 0;
}
