---
title: 'Demo: Trace One Tiny C Program'
slug: trace-a-tiny-program
order: 5
language: c
lesson_type: interactive
runtime: server
summary: Read a complete C program from main to its printed line.
seo_title: 'Demo: Trace One Tiny C Program | Learn C Programming'
seo_description: Read a complete C program from main to its printed line.
seo_keywords:
- C programming
- trace a tiny program
- C beginner exercises
---
# Find the line that prints the sign

The workshop needs a one-line sign. Read the program before running it: which instruction puts words on the screen? You can leave the unfamiliar punctuation alone for now.

```c run
#include <stdio.h>

int main(void) {
    printf("Repair desk open\n");
    return 0;
}
```
`#include` makes the declaration of `printf` available. Execution starts in `main`; `printf` writes the quoted words, and `\n` ends the line. `return 0;` reports success to the environment, not a printed zero. Try replacing the sign's words with `Repairs today` and run it once more.
