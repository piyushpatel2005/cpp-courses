#include <stdio.h>

int items_in_boxes(int boxes, int per_box);

int main(void) {
    printf("Items: %d\n", items_in_boxes(4, 6));
    return 0;
}

int items_in_boxes(int boxes, int per_box) {
    return boxes * per_box;
}
