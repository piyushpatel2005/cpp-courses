---
title: 'Demo: A Tag Tells You What Is Stored'
slug: tagged-union-demo
order: 3
language: c
lesson_type: interactive
runtime: server
summary: Pair a union with an enum tag and read the correct member.
seo_title: 'Demo: A Tag Tells You What Is Stored | Learn C Programming'
seo_description: Pair a union with an enum tag and read the correct member.
seo_keywords:
- C programming
- tagged union demo
- C beginner exercises
---
# Keep track of which member is stored

A union doesn't record which member you wrote last. A separate `kind` value can do that job. Here a `struct` holds both the tag and the union, so the program checks whether the ticket carries a tool count or a grade before printing.

```c run
#include <stdio.h>

enum Kind { TOOL_COUNT, QUALITY_GRADE };

struct Ticket {
    enum Kind kind;
    union {
        int count;
        char grade;
    } value;
};

int main(void) {
    struct Ticket ticket = {.kind = TOOL_COUNT, .value.count = 4};
    if (ticket.kind == TOOL_COUNT) {
        printf("Tools: %d\n", ticket.value.count);
    } else {
        printf("Grade: %c\n", ticket.value.grade);
    }
    return 0;
}
```
Try the grade case by changing `kind` to `QUALITY_GRADE` and the stored member to `grade = 'A'`. Change both together. A grade tag paired with a count would send the program to the wrong member.
