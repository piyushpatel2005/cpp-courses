---
title: 'Exercise: Choose a Service Desk'
slug: exercise-switch-day
order: 5
language: c
lesson_type: coding
runtime: server
summary: Select a named service desk with switch and a default branch.
seo_title: 'Exercise: Choose a Service Desk | Learn C Programming'
seo_description: Select a named service desk with switch and a default branch.
seo_keywords:
- C programming
- 'exercise: choose a service desk'
- learn C
validation_rules:
- type: equals
  target: output
  value: Repairs
  message: Check your exact output, including capitalization and line order.
hints:
- A case label ends with a colon; put break after each printf.
---

# Match a desk to a service

At the community center, the desk number determines which service name appears. Use the route example as a guide, but write cases for the desks. Keep `desk` at 3 for submission. You can try 1 and 8 first to check a named case and the fallback, then restore 3.

## Your Task

1. Use `switch (desk)` with cases 1, 2, and 3 to print `Information`, `Bookings`, and `Repairs` respectively; print `Unknown desk` for all other values. Use `break` to prevent fall-through. With the supplied value, output exactly `Repairs` and a newline.
