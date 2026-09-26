---
title: "Alias a Record Type with typedef"
slug: typedef-record
order: 3
language: c
lesson_type: interactive
runtime: server
summary: "Give a struct type a short alias using typedef."
seo_title: "Alias a Record Type with typedef | Learn C Programming"
seo_description: "Give a struct type a short alias using typedef."
seo_keywords: ["C programming", "typedef-record", "workshop records"]
---

# Alias a Record Type with typedef

Several kits use the same record shape. `typedef` lets you call that anonymous struct type `KitRecord`, so each declaration can use a short name. This defines a type, not a kit; `KitRecord kit` creates an object of that type. Access its fields with dot notation.

```c run
#include <stdio.h>
typedef struct { const char *name; int count; } KitRecord;
int main(void) {
    KitRecord kit = {"Brushes", 2};
    printf("%s: %d\n", kit.name, kit.count);
    return 0;
}
```

The program prints `Brushes: 2`. Change `kit.count`'s initial value and run it again; the type name stays the same.
