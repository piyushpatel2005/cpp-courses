---
title: 'Exercise: Store Three Repair Counts'
slug: exercise-malloc-counts
order: 3
language: c
lesson_type: coding
runtime: server
summary: Check malloc, initialize all elements, compute a sum, and release the allocation.
seo_title: 'Exercise: Store Three Repair Counts | Learn C Programming'
seo_description: Check malloc, initialize all elements, compute a sum, and release the allocation.
seo_keywords:
- C programming
- exercise malloc counts
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Repairs: 14'
  message: Check the complete printed output and line order.
hints:
- Call malloc(n * sizeof *counts), check for NULL, assign each count, then free(counts).
---

# Keep three counts until the report is printed

The report uses three repair counts: 2, 5, and 7. Allocate room for exactly three integers and check the pointer before touching any element. `malloc` does not initialize those integers, so write all three before summing them. Free the storage after printing.

## Your Task

1. Allocate space for three `int` elements with `malloc`, using `sizeof *counts`. If it returns `NULL`, return 1. Otherwise assign 2, 5, and 7 to indexes 0–2, print `Repairs: 14` followed by a newline using those elements, and `free` the allocation before returning 0.
