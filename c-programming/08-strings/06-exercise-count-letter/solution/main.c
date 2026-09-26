#include <stdio.h>

int main(void) {
    char label[] = "banana";
    int count = 0;
    for (size_t i = 0; label[i] != '\0'; i++) {
        if (label[i] == 'a') {
            count++;
        }
    }
    printf("Letters a: %d\n", count);
    return 0;
}
