---
title: 'Exercise: Handle an Optional Pointer'
slug: exercise-optional-shelf
order: 8
language: c
lesson_type: coding
runtime: server
summary: Check an optional pointer before dereferencing it.
seo_title: 'Exercise: Handle an Optional Pointer | Learn C Programming'
seo_description: Check an optional pointer before dereferencing it.
seo_keywords:
- C programming
- exercise optional shelf
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: Bay not assigned
  message: Check the complete printed output and line order.
hints:
- Use if (selected == NULL); dereference only inside the else branch.
---

# Handle an unassigned bay

The delivery note has no bay assigned yet. Check `selected` before reading through it, and keep the supplied `NULL` value for submission. To try the other branch, set it to `&bay` temporarily, run the program, and restore `NULL` afterward.

## Your Task

1. Print `Bay not assigned` if the supplied pointer is `NULL`; otherwise print `Bay: 6` using `*selected`. Leave `selected = NULL` for submission, so the output is exactly `Bay not assigned` and a newline.
