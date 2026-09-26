#include <stdio.h>
int main(void) {
    char label[32];
    int written = snprintf(label, sizeof label, "%s #%d", "Shelf", 3);
    if (written < 0 || (size_t)written >= sizeof label) return 1;
    puts(label);
    return 0;
}
