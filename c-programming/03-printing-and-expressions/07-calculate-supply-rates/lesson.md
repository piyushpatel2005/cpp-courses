---
title: "Demo: Evaluate expressions before printing"
slug: "calculate-supply-rates"
order: 7
language: "c"
lesson_type: "interactive"
runtime: "server"
summary: "Use C expression precedence and convert before division for a fractional result."
seo_title: "Demo: Evaluate expressions before printing | Learn C Programming"
seo_description: "Use C expression precedence and convert before division for a fractional result. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C evaluate expressions before printing", "beginner C exercises"]
---
# Count bolts and work out an average

There are two bags with four bolts each and three loose bolts. First calculate the total; then divide it by the number of bags.

C multiplies before it adds in `bags * bolts_each + extra`. When both operands of `/` are `int`, `11 / 2` gives the integer 5. Convert `bolts` to `double` before dividing to keep the fractional part, which prints as 5.50 here. Converting the result after integer division cannot bring that fraction back.

```c run
#include <stdio.h>

int main(void) {
    int bags = 2;
    int bolts_each = 4;
    int extra = 3;
    int bolts = bags * bolts_each + extra;
    int full_bags = bolts / bags;
    double average = (double) bolts / bags;
    printf("Bolts: %d | Whole: %d | Average: %.2f\n", bolts, full_bags, average);
    return 0;
}
```
Compare Whole and Average after running the program. Both use the same total; only the average converts an operand before division.
