---
title: 'Exercise: Build a Position Mask'
slug: exercise-build-mask
order: 8
language: c
lesson_type: coding
runtime: server
summary: Build a small unsigned bit mask by shifting rather than using a literal.
seo_title: 'Exercise: Build a Position Mask | Learn C Programming'
seo_description: Build a small unsigned bit mask by shifting rather than using a literal.
seo_keywords:
- C programming
- exercise build mask
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Flags: 10'
  message: Check the complete printed output and line order.
hints:
- Set mask = 1u << 3, then OR it into flags.
---
# Set the fourth indicator

The display numbers four positions 0 through 3. Shift `1u` left three places to build the mask for position 3, then OR it into the flags already stored. That new bit contributes 8 to the final value.

## Your Task

1. Build `mask` using `1u << 3`, OR it into the supplied `flags`, and print `Flags: 10` followed by a newline. Do not replace the calculation with the literal 10.
