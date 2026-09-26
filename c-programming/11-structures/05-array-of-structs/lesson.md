---
title: "Walk an Array of Records"
slug: array-of-structs
order: 5
language: c
lesson_type: interactive
runtime: server
summary: "Index an array of structs and read each selected member."
seo_title: "Walk an Array of Records | Learn C Programming"
seo_description: "Index an array of structs and read each selected member."
seo_keywords: ["C programming", "array-of-structs", "workshop records"]
---

# Walk an Array of Records

Tape and glue sit in separate bins, but the desk needs one total. `bins[i]` picks a record from the array; `.units` picks the count in that record. For two bins, the valid indexes are 0 and 1.

```c run
#include <stdio.h>
struct Bin { const char *item; int units; };
int main(void) {
    struct Bin bins[] = {{"Tape", 2}, {"Glue", 5}};
    int total = 0;
    for (int i = 0; i < 2; i++) total += bins[i].units;
    printf("Units: %d\n", total);
    return 0;
}
```

Run the loop to get `Units: 7`. Change Glue from 5 to 6 and check that the total becomes 8. The condition `i < 2` keeps the loop inside the array.
