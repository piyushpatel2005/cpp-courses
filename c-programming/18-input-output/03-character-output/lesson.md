---
title: "Print Characters with putchar"
slug: character-output
order: 3
language: c
lesson_type: interactive
runtime: server
summary: "Write individual characters to stdout with putchar."
seo_title: "Print Characters with putchar | Learn C Programming"
seo_description: "Write individual characters to stdout with putchar."
seo_keywords: ["C programming", "character-output", "workshop records"]
---

# Print Characters with putchar

The check-in board needs a two-letter mark. `putchar` writes one character at a time; character literals use single quotes. It will not add a newline for you. This example does not call `getchar`, which reads from stdin.

```c run
#include <stdio.h>
int main(void) {
    putchar('O');
    putchar('K');
    putchar('\n');
    return 0;
}
```

Run it to see `OK` on its own line. Temporarily remove `putchar('\n');` and observe that the output no longer ends with a newline.
