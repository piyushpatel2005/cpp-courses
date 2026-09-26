---
title: 'Exercise: Count a Label'
slug: exercise-string-length
order: 2
language: c
lesson_type: coding
runtime: server
summary: Use strlen to count characters while leaving room for the terminator.
seo_title: 'Exercise: Count a Label | Learn C Programming'
seo_description: Use strlen to count characters while leaving room for the terminator.
seo_keywords:
- C programming
- 'exercise: count a label'
- learn C
validation_rules:
- type: equals
  target: output
  value: 'Letters: 5'
  message: Check your exact output, including capitalization and line order.
hints:
- Use char label[] = "Trail"; then printf with %zu and strlen(label).
---

# Exercise: Count a Label

A trail marker needs its label length printed. `strlen` counts characters up to, but not including, the `\0` terminator. It returns `size_t`, so use `%zu` in `printf` to display the result.

## Your Task

1. Include `<string.h>`, declare a modifiable character array initialized with `"Trail"`, and print `Letters: 5` followed by a newline using `strlen(label)` and `%zu`.
