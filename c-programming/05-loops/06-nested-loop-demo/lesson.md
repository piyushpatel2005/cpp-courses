---
title: 'Demo: Label a Two-Row Shelf'
slug: nested-loop-demo
order: 6
language: c
lesson_type: interactive
runtime: server
summary: Trace the full inner loop for every outer-loop row.
seo_title: 'Demo: Label a Two-Row Shelf | Learn C Programming'
seo_description: Trace the full inner loop for every outer-loop row.
seo_keywords:
- C programming
- nested loop demo
- C beginner exercises
---

# Label two rows of shelves

Each of two shelf rows has three positions to label. The outer `for` chooses a row; the inner `for` walks through its positions. When the row changes, `position` starts at 1 again. Trace `(row, position)` for the first row before pressing Run.

```c run
#include <stdio.h>

int main(void) {
    for (int row = 1; row <= 2; row++) {
        for (int position = 1; position <= 3; position++) {
            printf("R%d-P%d\n", row, position);
        }
    }
    return 0;
}
```

You should see six lines, with `R1` on the first three. Change the outer limit to 3; you get a whole new row, not just one label. A `break` in the inner loop would end only that row’s positions, not the outer loop. Next, label a smaller grid of tool drawers.
