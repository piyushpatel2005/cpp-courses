---
title: "Pass a Record to a Function"
slug: struct-argument
order: 7
language: c
lesson_type: interactive
runtime: server
summary: "Pass a small struct by value to a printing function."
seo_title: "Pass a Record to a Function | Learn C Programming"
seo_description: "Pass a small struct by value to a printing function."
seo_keywords: ["C programming", "struct-argument", "workshop records"]
---

# Pass a Record to a Function

The desk clerk prints kit labels from more than one record. Give the printing function a `struct Kit` parameter: it receives a copy, so reading its members leaves the caller's record alone.

```c run
#include <stdio.h>
struct Kit { const char *name; int pieces; };
void show_kit(struct Kit kit) {
    printf("%s: %d pieces\n", kit.name, kit.pieces);
}
int main(void) {
    struct Kit kit = {"Paint", 4};
    show_kit(kit);
    return 0;
}
```

Run it to see `Paint: 4 pieces`. Change the piece count in `main` and run again; `show_kit` prints the new value without needing its own hard-coded count.
