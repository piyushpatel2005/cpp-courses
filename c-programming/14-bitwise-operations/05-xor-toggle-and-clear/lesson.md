---
title: 'Demo: Toggle and Clear Individual Flags'
slug: xor-toggle-and-clear
order: 5
language: c
lesson_type: interactive
runtime: server
summary: Distinguish XOR toggling from clearing with AND and a complemented mask.
seo_title: 'Demo: Toggle and Clear Individual Flags | Learn C Programming'
seo_description: Distinguish XOR toggling from clearing with AND and a complemented mask.
seo_keywords:
- C programming
- xor toggle and clear
- C beginner exercises
---
# Toggle or clear one flag

XOR (`^`) flips a selected bit: on becomes off, and off becomes on. If you need the bit off regardless of its starting state, use `flags & ~mask` instead. `~` complements every bit of the unsigned mask; the following AND clears the selected bit while preserving the others. Logical `!` is different: it produces a truth value.

```c run
#include <stdio.h>

int main(void) {
    unsigned int flags = 0x5u; /* 0101 */
    unsigned int target = 0x4u; /* 0100 */
    flags ^= target;           /* 0001 */
    printf("Toggled: %u\n", flags);
    flags |= target;           /* 0101 again */
    flags &= ~target;          /* 0001 */
    printf("Cleared: %u\n", flags);
    return 0;
}
```
Trace the low four bits through each assignment. Toggling a bit twice returns it to where it started; clearing twice still leaves it off. For the exercise, you'll toggle.
