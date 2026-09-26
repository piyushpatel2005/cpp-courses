---
title: 'Exercise: Mark a Kit Ready'
slug: exercise-set-flag
order: 4
language: c
lesson_type: coding
runtime: server
summary: Set one flag using OR without removing existing flags.
seo_title: 'Exercise: Mark a Kit Ready | Learn C Programming'
seo_description: Set one flag using OR without removing existing flags.
seo_keywords:
- C programming
- exercise set flag
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Flags: 9'
  message: Check the complete printed output and line order.
hints:
- 'OR preserves any bits that were already on: flags |= ready.'
---
# Set a kit's ready flag

A kit already has its lowest flag on. The ready bit is worth 8. Combine it with the existing flags using OR rather than replacing the whole value. The printed number will let you check that both bits remain set.

## Your Task

1. Set the `ready` bit in `flags` using `|` or `|=`, then print `Flags: 9` followed by a newline. Do not replace the existing flags with a literal 9.
