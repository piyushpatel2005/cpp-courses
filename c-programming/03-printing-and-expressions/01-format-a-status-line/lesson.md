---
title: "Demo: Match printf placeholders and arguments"
slug: "format-a-status-line"
order: 1
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Match C printf format conversions to ordered argument types."
seo_title: "Demo: Match printf placeholders and arguments | Learn C Programming"
seo_description: "Match C printf format conversions to ordered argument types. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C match printf placeholders and arguments", "beginner C exercises"]
---
# Print a fan repair status

Two fans at bench D are ready. The label keeps the same wording, but the bench letter, count, and time come from variables.

`printf` moves through its format string from left to right. `%c` takes a `char`, `%d` takes an `int`, and `%.1f` displays a `double` to one decimal place. Each conversion uses the next argument. A placeholder paired with the wrong argument type can cause undefined behavior, not merely a messy label.

```c run
#include <stdio.h>

int main(void) {
    char bench = 'D';
    int fans = 2;
    double hours = 1.5;
    printf("Bench %c: %d fans in %.1f hours\n", bench, fans, hours);
    return 0;
}
```
Run the program, then match the bench letter, fan count, and hours in the output to the three arguments in the `printf` call.
