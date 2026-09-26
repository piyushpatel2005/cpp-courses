#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t stations = 3;
    int *visits = calloc(stations, sizeof *visits);
    if (visits == NULL) {
        return 1;
    }
    visits[2] = 4;
    printf("Stations: %d, %d, %d\n", visits[0], visits[1], visits[2]);
    free(visits);
    return 0;
}
