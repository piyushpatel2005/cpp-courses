---
title: 'Demo: Start Allocated Counters at Zero'
slug: calloc-demo
order: 4
language: c
lesson_type: interactive
runtime: server
summary: Use calloc for zero-initialized integer storage and check the returned pointer.
seo_title: 'Demo: Start Allocated Counters at Zero | Learn C Programming'
seo_description: Use calloc for zero-initialized integer storage and check the returned pointer.
seo_keywords:
- C programming
- calloc demo
- C beginner exercises
---

# Start the attendance counters at zero

`calloc` takes an element count and the size of one element, then allocates space with all its bytes set to zero. For the `int` counters here, each starting value is zero. You still need to handle a `NULL` result and call `free` when finished. The call order is `calloc(number_of_elements, size_of_one_element)`.

```c run
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t desks = 2;
    int *visits = calloc(desks, sizeof *visits);
    if (visits == NULL) {
        return 1;
    }
    visits[1] = 3;
    printf("Visits: %d, %d\n", visits[0], visits[1]);
    free(visits);
    return 0;
}
```

Only `visits[1]` is changed, so the print shows `Visits: 0, 3`. Had you used `malloc`, you would need to initialize `visits[0]` before reading it.
