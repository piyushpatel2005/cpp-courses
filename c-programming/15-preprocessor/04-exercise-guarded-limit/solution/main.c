#include <stdio.h>
#ifndef BADGE_LIMIT
#define BADGE_LIMIT 6
#endif
int main(void) {
    const int occupied = 4;
    printf("Open slots: %d\n", BADGE_LIMIT - occupied);
    return 0;
}
