#include <stdio.h>
struct Stack { const char *label; int sheets; };
int main(void) {
    struct Stack stacks[] = {{"Blue", 2}, {"Green", 4}, {"Red", 3}};
    int total = 0;
    /* Add all three sheets values. */
    printf("Sheets: %d\n", total);
    return 0;
}
