#include <stdio.h>

int main(void) {
    unsigned int flags = 0x1u;
    unsigned int ready = 0x8u;
    flags |= ready;
    printf("Flags: %u\n", flags);
    return 0;
}
