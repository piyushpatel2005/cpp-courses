#include <stdio.h>

struct Crate { int items; double kilograms; };

int main(void) {
    struct Crate crate = {.items = 3, .kilograms = 2.5};
    printf("Crate: %d items, %.1f kg\n", crate.items, crate.kilograms);
    return 0;
}
