---
title: 'Demo: Visit Each Character'
slug: walk-characters
order: 5
language: c
lesson_type: interactive
runtime: server
summary: Walk a null-terminated array until the terminator without printing it.
seo_title: 'Demo: Visit Each Character | Learn C Programming'
seo_description: Walk a null-terminated array until the terminator without printing it.
seo_keywords:
- C programming
- walk characters
- C beginner exercises
---

# Inspect each letter on a sign

To print a numbered list of a sign's letters, start at index 0 and keep going until the character there is `\0`. That terminator is a stopping marker, not another letter to print. This loop relies on the array containing a terminator before its end; without one, it would keep reading past the array.

```c run
#include <stdio.h>

int main(void) {
    char label[] = "OK";
    for (size_t i = 0; label[i] != '\0'; i++) {
        printf("%zu: %c\n", i, label[i]);
    }
    return 0;
}
```

Run and note indexes 0 and 1. Change the label to `"OPEN"` and count its visible characters. A character array without a terminator is *not* safe for this pattern. The same loop shape can count a particular letter instead of printing each one.
