---
title: 'Demo: Declare Before a Function Call'
slug: prototypes-demo
order: 4
language: c
lesson_type: interactive
runtime: server
summary: Use a function prototype when its definition comes after main.
seo_title: 'Demo: Declare Before a Function Call | Learn C Programming'
seo_description: Use a function prototype when its definition comes after main.
seo_keywords:
- C programming
- 'demo: declare before a function call'
- learn C
---

# A declaration before a later definition

The earlier functions appeared above `main`. In a longer file, you might want the definition below it. Put a *prototype* first so the compiler knows the return and parameter types when it reaches the call. The prototype ends in a semicolon; the later definition supplies the body.

```c run
#include <stdio.h>

int add_minutes(int start, int extra); /* declaration */

int main(void) {
    printf("End: %d\n", add_minutes(10, 5));
    return 0;
}

int add_minutes(int start, int extra) { /* definition */
    return start + extra;
}
```

Here `main` passes two integers to `add_minutes`, then `printf` displays the returned value. Try changing the second argument to 8. The prototype does not create another function; its return and parameter types must agree with the definition.
