#include <stdio.h>

int main(void) {
    const int slot_limit = 12;
    int filled = 7;
    {
        int free_slots = slot_limit - filled;
        printf("Free slots: %d\n", free_slots);
    }
    printf("Slot limit: %d\n", slot_limit);
    return 0;
}
