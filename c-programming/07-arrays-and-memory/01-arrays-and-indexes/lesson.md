---
title: "Arrays and Zero-Based Indexes"
slug: arrays-and-indexes
order: 1
language: c
lesson_type: interactive
runtime: server
summary: "Read and change array elements using indexes from zero through length minus one."
seo_title: "Arrays and Zero-Based Indexes | Learn C Programming"
seo_description: Read and change array elements using indexes from zero through length minus one.
seo_keywords: ["C programming", "C arrays and indexes", "learn C for beginners"]
---

# Arrays and Zero-Based Indexes

Suppose three bins hold 4, 7, and 9 parts. `int scores[3] = {4, 7, 9};` keeps those counts in three adjacent `int` elements. Their indexes are 0, 1, and 2, so `scores[2]` is 9. C will not stop you from trying `scores[3]`, but that access is outside the array and has undefined behavior.

A loop can visit the elements by index. The condition `i < 3` stops before index 3.

Visit three temperatures and add them:

```c run
#include <stdio.h>

int main(void) {
    int temps[3] = {18, 20, 22};
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += temps[i];
    }
    printf("Total: %d\n", total);
    return 0;
}
```

On each pass, `i` names a valid slot: 0, 1, or 2.

An element can be changed using its index:

```c run
#include <stdio.h>

int main(void) {
    int marks[2] = {5, 6};
    marks[1] = 8;
    printf("Second mark: %d\n", marks[1]);
    return 0;
}
```

Only the second element changes. The first still holds 5.

## Storage and bounds

`temps` has three elements regardless of what happens to be stored nearby. C does not attach a length to an array. Here in `main`, `sizeof temps / sizeof temps[0]` calculates the element count. Once an array is passed to a function, its parameter is a pointer, so the same expression will not give you that count.
