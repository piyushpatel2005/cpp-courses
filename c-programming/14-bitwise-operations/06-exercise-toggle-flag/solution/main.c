#include <stdio.h>

int main(void) {
    unsigned int flags = 0x3u;
    unsigned int warning = 0x1u;
    flags ^= warning;
    printf("Flags: %u\n", flags);
    return 0;
}
