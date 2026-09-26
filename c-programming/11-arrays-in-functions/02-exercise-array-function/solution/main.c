#include <stdio.h>

int sum_boxes(const int boxes[], size_t count) {
    int total = 0;
    for (size_t i = 0; i < count; i++) {
        total += boxes[i];
    }
    return total;
}

int main(void) {
    int boxes[] = {2, 4, 7};
    size_t count = sizeof boxes / sizeof boxes[0];
    printf("Boxes: %d\n", sum_boxes(boxes, count));
    return 0;
}
