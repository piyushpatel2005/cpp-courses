#include <stdio.h>

enum Kind { PARTS, GRADE };
struct Ticket {
    enum Kind kind;
    union { int count; char grade; } value;
};

int main(void) {
    struct Ticket ticket = {.kind = GRADE, .value.grade = 'C'};
    if (ticket.kind == GRADE) {
        printf("Grade: %c\n", ticket.value.grade);
    } else {
        printf("Parts: %d\n", ticket.value.count);
    }
    return 0;
}
