---
title: "Comparisons and True or False"
slug: comparisons
order: 1
language: c
lesson_type: interactive
runtime: server
summary: "Use relational, equality, and logical operators to form C conditions."
seo_title: "Comparisons and True or False | Learn C Programming"
seo_description: "Use relational, equality, and logical operators to form C conditions."
seo_keywords: ["C programming", "C comparisons", "learn C for beginners"]
---

# Check the room capacity

A meeting room has 15 spaces. Before admitting another person, the program needs a condition: an expression that is false (`0`) or true (nonzero). `==` compares two values, while `=` assigns one; `!=` means not equal. Use `&&` when both conditions must hold, `||` when either is enough, and `!` to reverse one. Comparisons themselves produce `0` or `1`, which `%d` can print.

Predict the three answers for 12 attendees before you run this:

```c run
#include <stdio.h>

int main(void) {
    int attendees = 12;
    int capacity = 15;
    printf("Space: %d\n", attendees < capacity);
    printf("Full: %d\n", attendees == capacity);
    printf("Valid: %d\n", attendees > 0 && attendees <= capacity);
    return 0;
}
```

Set `attendees` to `15`. Which answer changes, and why?

## A useful short circuit

A comparison such as `attendees < capacity` is either 0 or 1. In an `if`, any nonzero scalar value counts as true. `&&` and `||` stop evaluating as soon as the left side determines the result. For instance, `divisor != 0 && total / divisor > 2` avoids dividing by zero when `divisor` is 0. Parentheses make mixed conditions easier to read.
