---
title: "Demo: Choose int, double, and char"
slug: "choose-value-types"
order: 5
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Use int, double, and char for whole counts, decimal measurements, and single-character labels."
seo_title: "Demo: Choose int, double, and char | Learn C Programming"
seo_description: "Use int, double, and char for whole counts, decimal measurements, and single-character labels. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C choose int, double, and char", "beginner C exercises"]
---
# Record three kinds of value

The hinge box needs a count, a weight, and a shelf letter on its label. Those are different kinds of data.

Use `int` for the whole-number count, `double` for the fractional weight, and `char` for one character in single quotes. In `printf`, `%c`, `%d`, and `%.1f` take the arguments in that order; `%.1f` displays one decimal place. `'4'` is a character, not the number 4.

```c run
#include <stdio.h>

int main(void) {
    int hinges = 6;
    double kilograms = 1.5;
    char shelf = 'B';
    printf("Shelf %c: %d hinges, %.1f kg\n", shelf, hinges, kilograms);
    return 0;
}
```
Run the label. Follow the arguments across the `printf` call: `shelf` goes with `%c`, `hinges` with `%d`, and `kilograms` with `%.1f`.
