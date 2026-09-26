---
title: 'Demo: Compare Union and Struct Storage'
slug: union-vs-struct-size
order: 5
language: c
lesson_type: interactive
runtime: server
summary: Compare shared and separate members without assuming platform-specific byte counts.
seo_title: 'Demo: Compare Union and Struct Storage | Learn C Programming'
seo_description: Compare shared and separate members without assuming platform-specific byte counts.
seo_keywords:
- C programming
- union vs struct size
- C beginner exercises
---
# Compare two storage layouts

A `struct` keeps both its fields at once. A `union` uses shared space for alternatives. The exact sizes depend on the implementation's type sizes and alignment, so don't expect a particular byte count. The union needs enough space for either field; the struct needs space for both, possibly with padding.

```c run
#include <stdio.h>

struct Separate { int count; double weight; };
union Shared { int count; double weight; };

int main(void) {
    printf("Union fits int: %d\n", sizeof(union Shared) >= sizeof(int));
    printf("Union fits double: %d\n", sizeof(union Shared) >= sizeof(double));
    printf("Struct has both fields: %d\n", sizeof(struct Separate) >= sizeof(int) + sizeof(double));
    return 0;
}
```
Each comparison prints 1 on a conforming C implementation. The sizes help illustrate the different layouts, but you choose a union or struct based on whether the values must be available at the same time.
