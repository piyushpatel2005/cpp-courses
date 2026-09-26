---
title: "Demo: Keep local names and constants clear"
slug: "local-scope-and-const"
order: 7
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Use const for a fixed C value and understand a name limited to its block."
seo_title: "Demo: Keep local names and constants clear | Learn C Programming"
seo_description: "Use const for a fixed C value and understand a name limited to its block. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C keep local names and constants clear", "beginner C exercises"]
---
# Keep a fixed rack capacity

The paint rack holds ten cans even when some spaces are empty. Name that capacity once, then calculate the available spaces separately.

`const int rack_capacity = 10;` declares a value you cannot assign to later. The inner braces form a block: `open_spots` exists only inside those braces. Outside them, `rack_capacity` is still in scope, but `open_spots` is not.

```c run
#include <stdio.h>

int main(void) {
    const int rack_capacity = 10;
    int cans = 6;
    {
        int open_spots = rack_capacity - cans;
        printf("Open rack spots: %d\n", open_spots);
    }
    printf("Rack capacity: %d\n", rack_capacity);
    return 0;
}
```
Run the program and read both lines. Move the `open_spots` print below the inner closing brace to see the compiler's scope error, then move it back.
