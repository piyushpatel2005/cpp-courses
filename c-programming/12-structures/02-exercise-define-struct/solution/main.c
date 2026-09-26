#include <stdio.h>
struct Supply { const char *label; int units; };
int main(void) {
    struct Supply spool = {"Thread", 6};
    printf("%s: %d\n", spool.label, spool.units);
    return 0;
}
