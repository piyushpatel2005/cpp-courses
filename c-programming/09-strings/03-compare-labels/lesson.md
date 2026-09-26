---
title: 'Demo: Compare Complete Strings'
slug: compare-labels
order: 3
language: c
lesson_type: interactive
runtime: server
summary: Use strcmp rather than == to compare the characters of two C strings.
seo_title: 'Demo: Compare Complete Strings | Learn C Programming'
seo_description: Use strcmp rather than == to compare the characters of two C strings.
seo_keywords:
- C programming
- compare labels
- C beginner exercises
---

# Check an incoming label

The desk should release a part only when its received label matches the approved one. You cannot compare two arrays as whole values with `==`; use `strcmp` from `<string.h>` to compare their terminated character sequences. Zero means they match. For a mismatch, use the sign of the result if ordering matters, not an assumed nonzero value.

```c run
#include <stdio.h>
#include <string.h>

int main(void) {
    char received[] = "Bolt";
    char approved[] = "Bolt";
    if (strcmp(received, approved) == 0) {
        printf("Labels match\n");
    } else {
        printf("Review label\n");
    }
    return 0;
}
```

Change one letter of `received` and Run again. The arrays each include their own terminator; the function compares their contents, not whether they occupy the same address. Try changing the first letter as well as the last; either change should select the other branch.
