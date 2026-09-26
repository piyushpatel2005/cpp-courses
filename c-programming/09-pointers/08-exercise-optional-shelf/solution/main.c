#include <stdio.h>

int main(void) {
    int bay = 6;
    (void) bay; /* Keep bay available for the optional-pointer experiment. */
    int *selected = NULL;
    if (selected == NULL) {
        printf("Bay not assigned\n");
    } else {
        printf("Bay: %d\n", *selected);
    }
    return 0;
}
