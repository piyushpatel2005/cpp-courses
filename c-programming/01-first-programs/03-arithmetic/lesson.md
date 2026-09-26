---
title: "Arithmetic and Integer Division"
slug: arithmetic
order: 3
language: c
lesson_type: interactive
runtime: server
summary: "Calculate totals with arithmetic operators and understand why integer division discards a remainder."
seo_title: "Arithmetic and Integer Division | Learn C Programming"
seo_description: "Calculate totals with arithmetic operators and understand why integer division discards a remainder."
seo_keywords: ["C programming", "C arithmetic", "learn C for beginners"]
---

# Work out a receipt

A receipt totals items before adding its fee. In C, `*`, `/`, and `%` take precedence over `+` and `-`; parentheses let you choose another order. `%` gives an integer remainder. Two integers divided with `/` produce an integer result, so `7 / 2` is `3`, not `3.5`. Use a floating-point operand such as `2.0` when you need a fraction.

For `items * price + fee`, multiply first. Check your prediction against this receipt:

```c run
#include <stdio.h>

int main(void) {
    int items = 3;
    int price = 4;
    int fee = 2;
    int total = items * price + fee;
    printf("Total: %d\n", total);
    return 0;
}
```

Change `items` and run again; the expression computes a new total. Division and remainder answer different questions about the same numbers:

```c run
#include <stdio.h>

int main(void) {
    int groups = 7 / 2;
    int leftover = 7 % 2;
    printf("Groups: %d, leftover: %d\n", groups, leftover);
    return 0;
}
```

`7 / 2` makes three whole groups, and `7 % 2` leaves one over. Try predicting `3 + 2 * 4` (11), then `(3 + 2) * 4` (20). Integer division truncates toward zero, including for negative results. Never divide by integer zero: its behavior is undefined. `total += fee` is shorthand for `total = total + fee`, but `total` still needs an initial value. The next demo converts an operand before division when a fraction matters.
