---
title: 'Demo: Parenthesize a Simple Macro'
slug: function-like-macros
order: 7
language: c
lesson_type: interactive
runtime: server
summary: Read a function-like macro and avoid precedence mistakes or side-effect arguments.
seo_title: 'Demo: Parenthesize a Simple Macro | Learn C Programming'
seo_description: Read a function-like macro and avoid precedence mistakes or side-effect arguments.
seo_keywords:
- C programming
- function like macros
- C beginner exercises
---

# Double a count without changing the order of arithmetic

The parts request doubles a sum. A function-like macro substitutes tokens before the expression is evaluated, so `DOUBLE(2 + 3)` needs parentheses around `x` and around the whole expansion. Otherwise `2 + 3 * 2` gives the wrong count.

```c run
#include <stdio.h>
#define DOUBLE(x) ((x) * 2)

int main(void) {
    int requested = DOUBLE(2 + 3);
    printf("Requested: %d\n", requested);
    return 0;
}
```

Run this to get `Requested: 10`. A regular function is usually easier to reason about. Avoid arguments such as `count++` in a macro that uses its parameter more than once: substitution can increment the count multiple times.
