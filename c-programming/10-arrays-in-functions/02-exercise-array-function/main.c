#include <stdio.h>

/* Define sum_boxes here. */

int main(void) {
    int boxes[] = {2, 4, 7};
    size_t count = sizeof boxes / sizeof boxes[0];
    printf("Boxes: %d\n", sum_boxes(boxes, count));
    return 0;
}
