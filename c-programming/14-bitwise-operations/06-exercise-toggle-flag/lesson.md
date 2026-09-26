---
title: 'Exercise: Toggle a Warning Flag'
slug: exercise-toggle-flag
order: 6
language: c
lesson_type: coding
runtime: server
summary: Toggle exactly one unsigned flag using XOR.
seo_title: 'Exercise: Toggle a Warning Flag | Learn C Programming'
seo_description: Toggle exactly one unsigned flag using XOR.
seo_keywords:
- C programming
- exercise toggle flag
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Flags: 2'
  message: Check the complete printed output and line order.
hints:
- XOR with the one-bit warning mask flips that bit and leaves others unchanged.
---
# Switch off the warning indicator

The panel's value is 3, or `0011` in the low four bits. The warning occupies the lowest bit, worth 1. Flip that bit with XOR and leave the next bit on. OR would not help here: it would keep the warning on.

## Your Task

1. Toggle `warning` in `flags` using `^` or `^=`, then print `Flags: 2` and a newline. Do not assign the answer directly.
