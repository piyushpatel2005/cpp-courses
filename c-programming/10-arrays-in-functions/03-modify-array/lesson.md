---
title: 'Demo: Change Array Elements Through a Parameter'
slug: modify-array
order: 3
language: c
lesson_type: interactive
runtime: server
summary: Show that changing a pointed-to element affects the caller array.
seo_title: 'Demo: Change Array Elements Through a Parameter | Learn C Programming'
seo_description: Show that changing a pointed-to element affects the caller array.
seo_keywords:
- C programming
- modify array
- C beginner exercises
---

# Update the same trays

When `main` passes `trays`, the function receives an address that leads to the same array elements. It does not receive a second array. Because this parameter is not `const`, assignments to `trays[i]` change the caller's elements. The separate count limits the loop; for a read-only function, use `const int[]` instead.

```c run
#include <stdio.h>

void add_one(int trays[], size_t count) {
    for (size_t i = 0; i < count; i++) {
        trays[i]++;
    }
}

int main(void) {
    int trays[] = {3, 4};
    add_one(trays, 2);
    printf("Trays: %d, %d\n", trays[0], trays[1]);
    return 0;
}
```

Before Run, predict 4 and 5. The function does not need to return the array: `trays[i]` accesses caller-owned elements. This differs from passing one plain `int`, which only copies that integer value. Try changing the initial values and check that the function still adds one to each.
