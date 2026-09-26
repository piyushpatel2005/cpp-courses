---
title: "Guard a Macro Default"
slug: guarded-limit
order: 3
language: c
lesson_type: interactive
runtime: server
summary: "Contrast a guarded macro constant with a typed const object."
seo_title: "Guard a Macro Default | Learn C Programming"
seo_description: "Contrast a guarded macro constant with a typed const object."
seo_keywords: ["C programming", "guarded-limit", "workshop records"]
---

# Guard a Macro Default

Suppose a rack holds five items by default, unless the build has already defined another limit. `#ifndef` checks for that definition before `#define` supplies the fallback; `#endif` closes the check. Unlike a macro, `const int current` is a typed object. Use `const` for an ordinary local value.

```c run
#include <stdio.h>
#ifndef RACK_LIMIT
#define RACK_LIMIT 5
#endif
int main(void) {
    const int current = 3;
    printf("Space: %d\n", RACK_LIMIT - current);
    return 0;
}
```

With three occupied spots, the program prints `Space: 2`. Change `current` to 4 and confirm that only one spot remains.
