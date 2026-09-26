---
title: 'Exercise: Total a Two-Row Grid'
slug: exercise-grid-total
order: 6
language: c
lesson_type: coding
runtime: server
summary: Traverse each row and column of a fixed grid exactly once.
seo_title: 'Exercise: Total a Two-Row Grid | Learn C Programming'
seo_description: Traverse each row and column of a fixed grid exactly once.
seo_keywords:
- C programming
- exercise grid total
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Tools: 14'
  message: Check the complete printed output and line order.
hints:
- Use row < 2 outside and column < 2 inside; add tools[row][column].
---

# Count the tools in two cabinets

Here the grid is two rows by two columns. Let the outer loop select a row and the inner loop visit its two elements. As you trace your code, `total` should be 5 after the first row and 14 after the second.

## Your Task

1. Visit all four elements of the supplied `tools[2][2]` exactly once with nested `for` loops. Add them into `total`, then print `Tools: 14` and a newline; do not hard-code 14.
