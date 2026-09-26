#include <stdio.h>

/* Define add_delivery here. */

int main(void) {
    int stations[] = {3, 4, 5};
    add_delivery(stations, 3, 2);
    printf("Stations: %d, %d, %d\n", stations[0], stations[1], stations[2]);
    return 0;
}
