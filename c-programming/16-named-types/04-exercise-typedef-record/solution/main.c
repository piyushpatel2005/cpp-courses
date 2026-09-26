#include <stdio.h>
typedef struct { const char *label; int meters; } RibbonRecord;
int main(void) {
    RibbonRecord ribbon = {"Ribbon", 4};
    printf("%s: %d meters\n", ribbon.label, ribbon.meters);
    return 0;
}
