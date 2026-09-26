---
title: 'Demo: Array Addresses and Offsets'
slug: array-addresses
order: 5
language: c
lesson_type: interactive
runtime: server
summary: Relate an array element to an in-bounds pointer offset without confusing arrays with pointers.
seo_title: 'Demo: Array Addresses and Offsets | Learn C Programming'
seo_description: Relate an array element to an in-bounds pointer offset without confusing arrays with pointers.
seo_keywords:
- C programming
- array addresses
- C beginner exercises
---

# Two ways to reach a tray

`trays` is an array, not a pointer variable. In most expressions, its name converts to the address of element 0. Adding 1 moves that pointer by one `int` element, making `*(trays + 1)` another way to read `trays[1]`. You may form a pointer just past the end of the array, but you cannot dereference it or move it farther.

```c run
#include <stdio.h>

int main(void) {
    int trays[] = {3, 5, 7};
    int *cursor = trays;
    printf("First: %d\n", *cursor);
    cursor++;
    printf("Second: %d\n", *cursor);
    printf("Same element: %d\n", trays[1]);
    return 0;
}
```

The first access reads index 0; after incrementing, `cursor` points at index 1. The array still has three elements and cannot be assigned a new address with `trays = cursor`. Change the second element and predict which printed lines change. For the exercise, you will move through four elements while keeping track of the length.
