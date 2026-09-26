#include <stdio.h>

int main(void) {
    for (int bay = 1; bay <= 2; bay++) {
        for (int drawer = 1; drawer <= 2; drawer++) {
            printf("Bay %d Drawer %d\n", bay, drawer);
        }
    }
    return 0;
}
