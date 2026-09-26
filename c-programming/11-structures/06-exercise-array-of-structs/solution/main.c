#include <stdio.h>
struct Stack { const char *label; int sheets; };
int main(void) {
    struct Stack stacks[] = {{"Blue", 2}, {"Green", 4}, {"Red", 3}};
    int total = 0;
    for (int i = 0; i < 3; i++) total += stacks[i].sheets;
    printf("Sheets: %d\n", total);
    return 0;
}
