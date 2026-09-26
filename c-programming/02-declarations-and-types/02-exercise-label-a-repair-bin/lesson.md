---
title: "Exercise: Declare and initialize variables"
slug: "exercise-label-a-repair-bin"
order: 2
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Declare and initialize C int variables before using them."
seo_title: "Exercise: Declare and initialize variables | Learn C Programming"
seo_description: "Declare and initialize C int variables before using them. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C declare and initialize variables", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Bin: 12 screws, 8 washers"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["Start with `int screws = 12;` and pass the variables to printf in label order."]
---
# Label the parts bin

The glue has a label, but the bin beside it doesn't. Give the screws and washers separate counts, then use those names to print the bin label.

## Your Task

1. Inside `main`, declare and initialize `int screws` to 12 and `int washers` to 8. Print exactly `Bin: 12 screws, 8 washers` and a newline, using both variables.

In the printed label, the screws count comes before the washers count.
