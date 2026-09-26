---
title: "Allocate and Release Records"
slug: malloc-free
order: 6
language: c
lesson_type: interactive
runtime: server
summary: "Check malloc for NULL before use and free allocated storage."
seo_title: "Allocate and Release Records | Learn C Programming"
seo_description: "Check malloc for NULL before use and free allocated storage."
seo_keywords: ["C programming", "malloc-free", "workshop records"]
---

# Allocate and Release Records

An inventory can allocate records just as it allocates integer counts. Here `n` is two, and `malloc(n * sizeof *items)` requests enough space for two `struct Count` objects. Check the result before using either record, initialize their fields, and release the space once after printing. If `n` came from untrusted input, you would also need to ensure the multiplication cannot overflow; this example uses a fixed small count.

```c run
#include <stdio.h>
#include <stdlib.h>
struct Count { int units; };
int main(void) {
    size_t n = 2;
    struct Count *items = malloc(n * sizeof *items);
    if (items == NULL) return 1;
    items[0].units = 2;
    items[1].units = 3;
    printf("Units: %d\n", items[0].units + items[1].units);
    free(items);
    return 0;
}
```

The two records hold 2 and 3 units, so the print shows `Units: 5`. Notice that the `NULL` check comes before both indexed writes and `free` comes after the final read.
