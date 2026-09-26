---
title: "Demo: Build lines with escapes and multiple calls"
slug: "assemble-a-two-line-note"
order: 3
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Use multiple C printf calls and newline, quote, and backslash escapes."
seo_title: "Demo: Build lines with escapes and multiple calls | Learn C Programming"
seo_description: "Use multiple C printf calls and newline, quote, and backslash escapes. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C build lines with escapes and multiple calls", "beginner C exercises"]
---
# Write a lantern pickup note

A volunteer needs to mark a lantern as "ready" and include a pickup route with a backslash. Those marks need special treatment inside a C string.

The first `printf` has no `\n`, so the second call continues on the same line. `\"` writes a quotation mark, `\\` writes one backslash, and `\n` starts a new output line after the current one. These escape sequences belong in the source; the finished note shows the characters they represent.

```c run
#include <stdio.h>

int main(void) {
    printf("Lantern: ");
    printf("\"ready\"\n");
    printf("Shelf \\ pickup\n");
    return 0;
}
```
Run it and look at where `Shelf` begins. If you remove the `\n` after `ready` temporarily, it joins the lantern line. Put the newline back when you're done.
