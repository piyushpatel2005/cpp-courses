#include <stdio.h>
struct Badge { const char *name; int number; };
void print_badge(struct Badge badge) {
    printf("Badge %d: %s\n", badge.number, badge.name);
}
int main(void) {
    struct Badge badge = {"Ari", 12};
    print_badge(badge);
    return 0;
}
