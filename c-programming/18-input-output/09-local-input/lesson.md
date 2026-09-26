---
title: "Input and Diagnostics in a Local Terminal"
slug: local-input
order: 9
language: c
lesson_type: informational
runtime: server
summary: "Distinguish stdin, stdout and stderr; read a bounded line locally."
seo_title: "Safe Local Input and stderr | Learn C Programming"
seo_description: "Understand standard streams, fgets bounds, EOF and diagnostic output in a local C program."
seo_keywords: ["C stdin", "C stderr", "fgets", "getchar"]
---

# Input and Diagnostics in a Local Terminal

At a local registration desk, a program could ask for a visitor's name. Input arrives through `stdin`; ordinary results go to `stdout`; diagnostics go to `stderr`. For example, `fputs("No name read\n", stderr);` writes a diagnostic. A terminal may show both output streams together, but they are separate.

`getchar()` returns the next input character as an `int`, or `EOF` at end of input or on error. Check for `EOF` before converting it to `char`. `putchar()` writes one character to stdout. For a bounded line, `fgets(buffer, sizeof buffer, stdin)` reserves space for the null terminator. Check for `NULL` before using the buffer. If a line exceeds the buffer, unread characters may remain; a full application must handle that case. Never use unbounded `gets()`.

**Try this in a local terminal only.** Compile with `gcc -std=c11 -Wall -Wextra -Werror main.c -o main`, run `./main`, type a short name, and press Enter. This is not a runnable browser block: the hosted runner may not accept interactive stdin or local file access.

```c
#include <stdio.h>
int main(void) {
    char name[32];
    fputs("Name: ", stdout);
    if (fgets(name, sizeof name, stdin) == NULL) {
        fputs("No name read\n", stderr);
        return 1;
    }
    printf("Registered: %s", name);
    return 0;
}
```

For a short name, `fgets` retains the newline you typed, so `printf` does not add one. The runnable exercises here use fixed data; none require stdin or stderr capture.
