---
title: 'Demo: Null, Validity, and Lifetime'
slug: null-and-lifetime
order: 7
language: c
lesson_type: interactive
runtime: server
summary: Check a pointer for NULL and avoid using an expired local object.
seo_title: 'Demo: Null, Validity, and Lifetime | Learn C Programming'
seo_description: Check a pointer for NULL and avoid using an expired local object.
seo_keywords:
- C programming
- null and lifetime
- C beginner exercises
---

# No shelf selected

`NULL` is a useful value when no object has been selected. If a pointer might be null, check it before dereferencing: `*pointer` cannot be used when `pointer == NULL`. A nonnull pointer is not automatically safe, though. An address of a local variable cannot be used once that variable's lifetime has ended, so do not return such an address from a function.

```c run
#include <stdio.h>

int main(void) {
    int shelf = 12;
    int *selected = NULL;
    if (selected == NULL) {
        printf("No shelf selected\n");
    }
    selected = &shelf;
    if (selected != NULL) {
        printf("Shelf: %d\n", *selected);
    }
    return 0;
}
```

Try setting `shelf` to 14; only the second line changes. A `NULL` check is necessary for a possibly absent pointer but not sufficient for a stale pointer after `free` or after an object dies. An allocation released with `free` has the same practical warning: checking an old pointer for `NULL` does not make it usable again.
