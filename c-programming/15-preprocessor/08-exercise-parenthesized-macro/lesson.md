---
title: 'Exercise: Keep a Macro Calculation Grouped'
slug: exercise-parenthesized-macro
order: 8
language: c
lesson_type: coding
runtime: server
summary: Define a small parenthesized macro and test it with a sum argument.
seo_title: 'Exercise: Keep a Macro Calculation Grouped | Learn C Programming'
seo_description: Define a small parenthesized macro and test it with a sum argument.
seo_keywords:
- C programming
- exercise parenthesized macro
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Parts: 15'
  message: Check the complete printed output and line order.
hints:
- 'Use #define TRIPLE(x) ((x) * 3).'
---

# Price two repair kits

The previous example doubled a sum. This time the request calls for three groups of `2 + 3` parts. Parentheses must keep the sum together before multiplication; the argument has no side effects.

## Your Task

1. Define `TRIPLE(x)` with parentheses around both the parameter and the whole result, multiplying by 3. Keep the supplied call `TRIPLE(2 + 3)` so the program prints `Parts: 15` with a newline.
