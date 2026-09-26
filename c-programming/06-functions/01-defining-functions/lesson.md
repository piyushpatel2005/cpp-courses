---
title: "Define and Call a Function"
slug: defining-functions
order: 1
language: c
lesson_type: interactive
runtime: server
summary: "Write a function with parameters and call it from main."
seo_title: "Define and Call a Function | Learn C Programming"
seo_description: "Write a function with parameters and call it from main."
seo_keywords: ["C programming", "C defining functions", "learn C for beginners"]
---

# Announce another table

A room coordinator needs to announce several ready tables. Instead of writing each message separately, put that job in a function. The definition `void announce(int number)` names the function, takes an `int` parameter, and returns no value. `announce(3);` is a call supplying the argument 3. Execution starts in `main`, even if another function appears first in the file.

Each call enters `announce`, prints a message, and returns to the next statement in `main`. Its local parameter `number` gets a fresh value for each call. With the definition before `main`, C can see it at both call sites:

```c run
#include <stdio.h>

void announce(int number) {
    printf("Table %d is ready\n", number);
}

int main(void) {
    announce(2);
    announce(5);
    return 0;
}
```

Replace the first argument with `7`. Only that announcement should change.

## What each call owns

An argument is the value supplied at a call; a parameter is the function’s local variable that receives it. `announce(2)` and `announce(5)` do not share a persistent `number`. Since `announce` returns `void`, call it as a statement, not as a numeric expression. Give a function one clear job and pass it the values that job needs.
