#include <stdio.h>

int main(void) {
    unsigned int flags = 0xDu;
    unsigned int inspection = 0x4u;
    printf("Inspected: %u\n", (unsigned int) ((flags & inspection) != 0u));
    return 0;
}
