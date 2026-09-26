---
title: 'Demo: Turn a Flag On with OR'
slug: or-set-bit
order: 3
language: c
lesson_type: interactive
runtime: server
summary: Use bitwise OR to set an unsigned flag while preserving other bits.
seo_title: 'Demo: Turn a Flag On with OR | Learn C Programming'
seo_description: Use bitwise OR to set an unsigned flag while preserving other bits.
seo_keywords:
- C programming
- or set bit
- C beginner exercises
---
# Mark a repair complete

The panel uses a bit to mark completed work. Bitwise OR (`|`) produces a 1 wherever either input has a 1, so it can turn on the completion bit without clearing the others. The current low bits are `0001`; the completion mask is `0100`.

```c run
#include <stdio.h>

int main(void) {
    unsigned int flags = 0x1u;
    unsigned int complete = 0x4u;
    flags = flags | complete;
    printf("Flags: %u\n", flags);
    printf("Complete: %u\n", (unsigned int) ((flags & complete) != 0u));
    return 0;
}
```
OR combines `0001` and `0100` into `0101`, or 5 in decimal. Try applying `flags | complete` a second time before printing; the value stays 5 because the bit was already on.
