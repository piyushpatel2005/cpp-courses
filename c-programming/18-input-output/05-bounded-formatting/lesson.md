---
title: "Format into a Bounded Buffer"
slug: bounded-formatting
order: 5
language: c
lesson_type: interactive
runtime: server
summary: "Use snprintf, check truncation, then print the finished label."
seo_title: "Format into a Bounded Buffer | Learn C Programming"
seo_description: "Use snprintf, check truncation, then print the finished label."
seo_keywords: ["C programming", "bounded-formatting", "workshop records"]
---

# Format into a Bounded Buffer

The supply desk builds a crate label in a fixed-size array before printing it. `snprintf` takes the buffer capacity, including room for the terminating null character. It returns the number of characters it wanted to write, or a negative value on error. A return value at least as large as the capacity means truncation.

```c run
#include <stdio.h>
int main(void) {
    char label[32];
    int written = snprintf(label, sizeof label, "%s #%d", "Crate", 7);
    if (written < 0 || (size_t)written >= sizeof label) return 1;
    puts(label);
    return 0;
}
```

Run it to see `Crate #7`. Try changing `label[32]` to `label[8]`: the check should reject the truncated result instead of printing a partial label.
