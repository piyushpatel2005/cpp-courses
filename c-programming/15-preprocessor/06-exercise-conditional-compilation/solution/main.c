#include <stdio.h>
#define SHOW_DEBUG

int main(void) {
    int stock = 6;
#ifdef SHOW_DEBUG
    printf("Debug stock: %d\n", stock);
#endif
    printf("Stock: %d\n", stock);
    return 0;
}
