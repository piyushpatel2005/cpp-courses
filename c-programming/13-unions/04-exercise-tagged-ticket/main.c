#include <stdio.h>

enum Kind { PARTS, GRADE };
struct Ticket {
    enum Kind kind;
    union { int count; char grade; } value;
};

int main(void) {
    struct Ticket ticket = {.kind = GRADE, .value.grade = 'C'};
    /* Branch on the tag before reading the union. */
    return 0;
}
