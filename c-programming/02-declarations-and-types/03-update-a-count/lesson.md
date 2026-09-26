---
title: "Demo: Assign a new value"
slug: "update-a-count"
order: 3
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Distinguish C variable initialization from later assignment."
seo_title: "Demo: Assign a new value | Learn C Programming"
seo_description: "Distinguish C variable initialization from later assignment. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C assign a new value", "beginner C exercises"]
---
# Correct the waiting count

Seven lamps are waiting at intake. Two owners pick theirs up, so the queue board needs a new number.

`int pending = 7;` creates the count. Later, `pending = pending - 2;` reads that count, subtracts two, and stores the result back in `pending`. The equals sign assigns a value; it is not claiming that the two sides are mathematically equal.

```c run
#include <stdio.h>

int main(void) {
    int pending = 7;
    pending = pending - 2;
    printf("Lamps waiting: %d\n", pending);
    return 0;
}
```
The board should say five lamps are waiting. If you start with eight instead, the same subtraction leaves six; put the starting count back to seven afterward.
