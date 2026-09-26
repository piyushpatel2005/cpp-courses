#include <stdio.h>
struct Stock { const char *label; int rolls; };
int main(void) {
    struct Stock poster = {"Poster paper", 4};
    poster.rolls += 2;
    printf("%s: %d rolls\n", poster.label, poster.rolls);
    return 0;
}
