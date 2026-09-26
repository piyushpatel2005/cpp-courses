---
title: 'Demo: Move a Bit into Position'
slug: unsigned-shifts
order: 7
language: c
lesson_type: interactive
runtime: server
summary: Use an unsigned left shift to build a mask and a right shift to inspect a field.
seo_title: 'Demo: Move a Bit into Position | Learn C Programming'
seo_description: Use an unsigned left shift to build a mask and a right shift to inspect a field.
seo_keywords:
- C programming
- unsigned shifts
- C beginner exercises
---
# Move a bit into place

The panel numbers its positions starting at zero. `1u << 3` moves a set bit to position 3 and makes a mask worth 8. Shifting an unsigned value right moves its bits toward lower positions and fills the high positions with zeroes. Keep shift counts below the type's width; shifting by that width or more is undefined.

```c run
#include <stdio.h>

int main(void) {
    unsigned int third = 1u << 3;
    unsigned int flags = 0xAu; /* 1010 */
    printf("Mask: %u\n", third);
    printf("Bit 3: %u\n", (flags >> 3) & 1u);
    return 0;
}
```
In `0xA` (`1010`), bit 3 is on, so the second printed value is 1. The `& 1u` selects that single bit after the shift. Bitwise `&` is not logical `&&`, which tests whole expressions for truth.
