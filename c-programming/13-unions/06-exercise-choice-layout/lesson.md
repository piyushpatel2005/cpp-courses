---
title: 'Exercise: Choose the Right Storage'
slug: exercise-choice-layout
order: 6
language: c
lesson_type: coding
runtime: server
summary: Use a struct when a record needs both fields at the same time.
seo_title: 'Exercise: Choose the Right Storage | Learn C Programming'
seo_description: Use a struct when a record needs both fields at the same time.
seo_keywords:
- C programming
- exercise choice layout
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Crate: 3 items, 2.5 kg'
  message: Check the complete printed output and line order.
hints:
- A struct keeps both members; use crate.items and crate.kilograms with matching printf conversions.
---
# Keep a crate's count and weight

For each crate, the desk needs the item count and the weight together. A union would let one value overwrite the other. Use a struct so both fields remain available when you print the record.

## Your Task

1. Declare `struct Crate` with `int items` and `double kilograms`; initialize one crate with 3 items and 2.5 kilograms. Print `Crate: 3 items, 2.5 kg` and a newline using the stored fields.
