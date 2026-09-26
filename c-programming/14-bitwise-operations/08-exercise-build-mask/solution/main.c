#include <stdio.h>

int main(void) {
    unsigned int flags = 0x2u;
    unsigned int mask = 1u << 3;
    flags |= mask;
    printf("Flags: %u\n", flags);
    return 0;
}
