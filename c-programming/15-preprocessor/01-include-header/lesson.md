---
title: "Include the Right Header"
slug: include-header
order: 1
language: c
lesson_type: interactive
runtime: server
summary: "Include string.h to declare strlen."
seo_title: "Include the Right Header | Learn C Programming"
seo_description: "Include string.h to declare strlen."
seo_keywords: ["C programming", "include-header", "workshop records"]
---

# Include the Right Header

The label desk needs the length of a tag. The preprocessor handles `#include <string.h>` before compilation, making the declaration of `strlen` available. `<stdio.h>` declares `printf`, and `%zu` matches the `size_t` returned by `strlen`.

```c run
#include <stdio.h>
#include <string.h>
int main(void) {
    const char *tag = "Tools";
    printf("Tag length: %zu\n", strlen(tag));
    return 0;
}
```

Run the program, then change `Tools` to `Kit`. The length should drop from 5 to 3; there is no need to count the letters yourself.
