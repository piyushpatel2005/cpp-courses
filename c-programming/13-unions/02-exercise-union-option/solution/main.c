#include <stdio.h>

union TicketValue {
    int bay;
    char priority;
};

int main(void) {
    union TicketValue ticket;
    ticket.priority = 'B';
    printf("Priority: %c\n", ticket.priority);
    return 0;
}
