---
title: "Demo: Print percent signs and aligned values"
slug: "align-a-progress-report"
order: 5
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Use %% for a literal percent sign and printf width and precision for aligned C output."
seo_title: "Demo: Print percent signs and aligned values | Learn C Programming"
seo_description: "Use %% for a literal percent sign and printf width and precision for aligned C output. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C print percent signs and aligned values", "beginner C exercises"]
---
# Make the count easy to scan

The repair report has a small completed count beside a time and a target percentage. Give the count enough room to line up when it grows.

`%3d` sets a minimum width of three columns and right-aligns the number. `%.2f` shows two decimal places. Because `%` starts a conversion, write `%%` to print an actual percent sign; that one takes no argument.

```c run
#include <stdio.h>

int main(void) {
    int done = 8;
    double hours = 2.5;
    printf("Done: %3d | Time: %.2f h | Goal: 80%%\n", done, hours);
    return 0;
}
```
With `done` set to 8, the count has two spaces before it. Try a two-digit count: it needs only one space within the three-column field.
