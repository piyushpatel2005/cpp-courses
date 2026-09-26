---
title: "Print a Formatted Label"
slug: formatted-stdout
order: 1
language: c
lesson_type: interactive
runtime: server
summary: "Use printf to send formatted values to stdout."
seo_title: "Print a Formatted Label | Learn C Programming"
seo_description: "Use printf to send formatted values to stdout."
seo_keywords: ["C programming", "formatted-stdout", "workshop records"]
---

# Print a Formatted Label

The event desk needs a sign for eight mending places. `printf` writes to stdout, the normal output stream. Its `%s` placeholder takes the activity string and `%d` takes the integer count, in that order. This program does not read stdin.

```c run
#include <stdio.h>
int main(void) {
    const char *activity = "Mending";
    int places = 8;
    printf("%s: %d places\n", activity, places);
    return 0;
}
```

Run it, then change `places` to 9. The sign should change from `Mending: 8 places` to `Mending: 9 places`; the activity stays the same.
