---
title: "Demo: Declare and initialize variables"
slug: "declare-and-initialize"
order: 1
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Declare and initialize C int variables before using them."
seo_title: "Demo: Declare and initialize variables | Learn C Programming"
seo_description: "Declare and initialize C int variables before using them. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C declare and initialize variables", "beginner C exercises"]
---
# Give the shelf counts names

A box of glue tubes arrived at the repair workshop. To print a useful shelf label, give the tube count and the shelf count their own names.

`int tubes = 3;` creates a whole-number variable called `tubes` and starts it at 3. `shelves` gets its own declaration. The semicolon finishes each statement. A C name can contain a digit but cannot begin with one. Don't print an uninitialized local variable: it has no reliable starting count.

```c run
#include <stdio.h>

int main(void) {
    int tubes = 3;
    int shelves = 2;
    printf("Glue tubes: %d; shelves: %d\n", tubes, shelves);
    return 0;
}
```
Run the program and find where each number in the label came from. Change `tubes` to 4 and see which part of the label changes; then restore 3.
