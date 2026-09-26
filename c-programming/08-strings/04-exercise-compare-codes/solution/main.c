#include <stdio.h>
#include <string.h>

int main(void) {
    char entered[] = "R42";
    char issued[] = "R42";
    if (strcmp(entered, issued) == 0) {
        printf("Release item\n");
    } else {
        printf("Ask for code\n");
    }
    return 0;
}
