---
title: 'Demo: Select a Fixed Choice with switch'
slug: switch-demo
order: 4
language: c
lesson_type: interactive
runtime: server
summary: Use switch, case, break, and default for discrete integer choices.
seo_title: 'Demo: Select a Fixed Choice with switch | Learn C Programming'
seo_description: Use switch, case, break, and default for discrete integer choices.
seo_keywords:
- C programming
- 'demo: select a fixed choice with switch'
- learn C
---

# A menu with fixed choices

A route number maps to a fixed destination. That differs from a range check such as `age >= 12`, where `if` fits better. In a `switch`, each `case` names one integral value. `break` leaves the switch after the match; without it, execution falls into the next case. `default` handles values with no matching case.

Route 2 is selected here. Predict the destination before running:

```c run
#include <stdio.h>

int main(void) {
    int route = 2;
    switch (route) {
        case 1:
            printf("Harbor\n");
            break;
        case 2:
            printf("Hill\n");
            break;
        default:
            printf("Unknown route\n");
            break;
    }
    return 0;
}
```

Set `route` to 9 and run again. You should reach `default`. A `case` cannot express a range like `route > 2`; use `if` for that. The next exercise gives you a different set of labels.
