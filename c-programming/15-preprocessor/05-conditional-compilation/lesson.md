---
title: 'Demo: Include Code Only for Debug Builds'
slug: conditional-compilation
order: 5
language: c
lesson_type: interactive
runtime: server
summary: 'Use #ifdef and #endif to compile a small diagnostic only when a name is defined.'
seo_title: 'Demo: Include Code Only for Debug Builds | Learn C Programming'
seo_description: 'Use #ifdef and #endif to compile a small diagnostic only when a name is defined.'
seo_keywords:
- C programming
- conditional compilation
- C beginner exercises
---

# Keep a debug line out of the normal report

![A conditional directive selects source lines before the compiler checks the program.](conditional-compilation-stages.svg)

The workshop report always needs its repair count. During debugging, a second line can show the value before the public report. `#ifdef TRACE` keeps the enclosed source only when `TRACE` is defined; the preprocessor makes that choice before C compilation. Here it is defined so both lines appear.

```c run
#include <stdio.h>
#define TRACE

int main(void) {
    int repairs = 4;
#ifdef TRACE
    printf("Debug count: %d\n", repairs);
#endif
    printf("Repairs: %d\n", repairs);
    return 0;
}
```

Remove `#define TRACE` and run again. `Debug count: 4` should disappear, while `Repairs: 4` stays. Restore the definition afterward. With a local compiler, you could instead pass `-DTRACE` at build time.
