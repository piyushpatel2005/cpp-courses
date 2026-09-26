---
title: "Variables and Formatted Output"
slug: variables-and-printing
order: 2
language: c
lesson_type: interactive
runtime: server
summary: "Declare int, double, and char variables and display them with matching printf formats."
seo_title: "Variables and Formatted Output | Learn C Programming"
seo_description: "Declare int, double, and char variables and display them with matching printf formats."
seo_keywords: ["C programming", "C variables and printing", "learn C for beginners"]
---

# Give the count a name

A ticket counter needs to remember its count. `int seats = 8;` gives that count a name: `int` is the type, `seats` the name, and `8` the initial value. C checks types as it processes your program.

To print a value, match its placeholder to its type: `%d` for `int`, `%f` for `double`, and `%c` for `char`. `%.1f` asks for one digit after the decimal point. Arguments after the format string must appear in placeholder order. A `char` is one character in single quotes; double quotes mark a string.

Run the ticket count, then look at what the second assignment changes:

```c run
#include <stdio.h>

int main(void) {
    int tickets = 3;
    printf("Tickets: %d\n", tickets);
    tickets = tickets + 2;
    printf("Tickets now: %d\n", tickets);
    return 0;
}
```

The second assignment replaces the value, not its type. The next program prints a character and a fractional distance:

```c run
#include <stdio.h>

int main(void) {
    double distance = 2.5;
    char zone = 'B';
    printf("Zone %c is %.1f km away\n", zone, distance);
    return 0;
}
```

Change `distance` to `3.75` and `%.1f` to `%.2f`. Check how many decimal places print.

## A value before a read

`int seats = 8;` both declares and initializes `seats`. In `seats = seats + 1;`, C computes the right side first, then stores the new value; `=` is assignment, not an equation. Never read an uninitialized local variable. Integer `8` and floating-point `8.0` have different types, and using the wrong `printf` conversion is unsafe. Use integers for counts, floating-point values when fractions matter, and `%%` to print a literal percent sign.
