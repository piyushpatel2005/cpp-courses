---
title: 'Exercise: Total with an In-Bounds Pointer'
slug: exercise-pointer-sum
order: 6
language: c
lesson_type: coding
runtime: server
summary: Advance a pointer through a fixed local array while tracking its known length.
seo_title: 'Exercise: Total with an In-Bounds Pointer | Learn C Programming'
seo_description: Advance a pointer through a fixed local array while tracking its known length.
seo_keywords:
- C programming
- exercise pointer sum
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Capacity: 18'
  message: Check the complete printed output and line order.
hints:
- Start int *cursor = packs; add *cursor, then increment cursor after each valid access.
---

# Total the battery packs

Four battery packs need one capacity total. Start your pointer at the first element, read it, and advance to the next. On the last pass, advancing produces a one-past-end pointer, which is allowed, but never dereference it. The loop needs exactly four reads.

## Your Task

1. Initialize a pointer to the first element of the supplied `packs` array; use a four-pass loop to add `*pointer` to `total` and advance the pointer; print `Capacity: 18` with a newline. Do not hard-code the total.
