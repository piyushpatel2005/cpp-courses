---
title: 'Demo: Run Once with do while'
slug: do-while-demo
order: 5
language: c
lesson_type: interactive
runtime: server
summary: Contrast post-tested do while with a pre-tested while loop.
seo_title: 'Demo: Run Once with do while | Learn C Programming'
seo_description: Contrast post-tested do while with a pre-tested while loop.
seo_keywords:
- C programming
- 'demo: run once with do while'
- learn C
---

# Run once, then check

A gate should report an attempt even when it has already reached its stopping value. An ordinary `while` could skip the report because it checks first. `do ... while` checks after the body, so it runs at least once. Its trailing `while (condition);` needs that semicolon.

Here `attempt` begins at the stop value. Predict the output:

```c run
#include <stdio.h>

int main(void) {
    int attempt = 3;
    do {
        printf("Attempt %d\n", attempt);
        attempt++;
    } while (attempt < 3);
    printf("Gate closed\n");
    return 0;
}
```

Start `attempt` at 1 and run it again: the body now gets more turns. Restore 3 afterward. The update still matters; a post-tested loop can run forever if its condition never becomes false.

## Two loops, one inside the other

To label a grid, you can put `for (int col = 0; col < 3; col++)` inside `for (int row = 0; row < 2; row++)`. The inner loop starts over for each row: three columns in each of two rows. `break` exits the nearest enclosing loop only; `continue` skips to that loop’s next iteration. Neither exits both loops for you. The next demo puts the grid into action.
