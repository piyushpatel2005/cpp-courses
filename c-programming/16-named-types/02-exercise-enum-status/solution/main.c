#include <stdio.h>
enum Signup { WAITING, CONFIRMED };
int main(void) {
    enum Signup state = CONFIRMED;
    printf("Confirmed: %d\n", state == CONFIRMED);
    return 0;
}
