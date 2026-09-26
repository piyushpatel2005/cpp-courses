---
title: "Name a Status with enum"
slug: enum-status
order: 1
language: c
lesson_type: interactive
runtime: server
summary: "Use an enum name instead of an unexplained integer status."
seo_title: "Name a Status with enum | Learn C Programming"
seo_description: "Use an enum name instead of an unexplained integer status."
seo_keywords: ["C programming", "enum-status", "workshop records"]
---

# Name a Status with enum

A loan record can be stored or borrowed. Naming those states with `enum State` makes `state == BORROWED` clearer than testing an unexplained number. With no explicit values, STORED is 0 and BORROWED is 1. An enum variable can still hold other integer values in C, so check values that come from outside the program.

```c run
#include <stdio.h>
enum State { STORED, BORROWED };
int main(void) {
    enum State state = BORROWED;
    printf("Borrowed: %d\n", state == BORROWED);
    return 0;
}
```

The comparison is true, so the program prints `Borrowed: 1`. Change the initial state to STORED and run it again to see the false case.
