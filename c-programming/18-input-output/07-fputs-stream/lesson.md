---
title: "Write a Line to stdout with fputs"
slug: fputs-stream
order: 7
language: c
lesson_type: interactive
runtime: server
summary: "Use fputs with stdout and an explicit newline."
seo_title: "Write a Line to stdout with fputs | Learn C Programming"
seo_description: "Use fputs with stdout and an explicit newline."
seo_keywords: ["C programming", "fputs-stream", "workshop records"]
---

# Write a Line to stdout with fputs

The donation counter already has its message. `fputs(text, stdout)` sends it to normal output exactly as written; it does not supply a newline. This example writes to stdout, not to a local file.

```c run
#include <stdio.h>
int main(void) {
    fputs("Donations ready\n", stdout);
    return 0;
}
```

Run it, then remove `\n` from the string and compare where the next terminal prompt appears. Put the newline back to keep the notice on its own line.
