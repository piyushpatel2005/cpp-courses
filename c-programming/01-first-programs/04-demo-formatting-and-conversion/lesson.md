---
title: 'Demo: Formatting and Numeric Conversion'
slug: demo-formatting-and-conversion
order: 4
language: c
lesson_type: interactive
runtime: server
summary: Use a conversion before division and select matching printf conversion specifiers.
seo_title: 'Demo: Formatting and Numeric Conversion | Learn C Programming'
seo_description: Use a conversion before division and select matching printf conversion specifiers.
seo_keywords:
- C programming
- 'demo: formatting and numeric conversion'
- learn C
---

# Formatting and conversion

At a market stall, you count whole apples but might split them across baskets. `printf` needs the right placeholder for each argument: `%d` for an `int`, `%.2f` for a `double` shown to two decimal places, and `%c` for a character. Match them in order. A mismatch can cause undefined behavior, not just an ugly receipt.

Before running this, decide whether integer division could give `2.50`. The cast turns `apples` into a `double` before division; converting the result afterward would be too late.

```c run
#include <stdio.h>

int main(void) {
    int apples = 5;
    int baskets = 2;
    double average = (double) apples / baskets;
    printf("Apples: %d; per basket: %.2f\n", apples, average);
    return 0;
}
```

Remove `(double)` for one run. The output becomes `2.00`: integer division yielded 2 before that value was stored as a `double`. Restore the cast.

The aisle is a character in single quotes; the printed text is a string in double quotes. Each value below has its own placeholder:

```c run
#include <stdio.h>

int main(void) {
    char aisle = 'C';
    double weight = 1.25;
    printf("Aisle %c: %.2f kg\n", aisle, weight);
    return 0;
}
```

For the shop-total exercise, the result is an integer. Print it with `%d`.
