---
title: 'Exercise: Update Through a Pointer'
slug: exercise-pointer-update
order: 2
language: c
lesson_type: coding
runtime: server
summary: Use an initialized int pointer to change the pointed-to value.
seo_title: 'Exercise: Update Through a Pointer | Learn C Programming'
seo_description: Use an initialized int pointer to change the pointed-to value.
seo_keywords:
- C programming
- 'exercise: update through a pointer'
- learn C
validation_rules:
- type: equals
  target: output
  value: 'Stock: 11'
  message: Check your exact output, including capitalization and line order.
hints:
- Initialize the pointer with &stock, then use *pointer += 4 to change stock.
---

# Exercise: Update Through a Pointer

The recorded stock is seven; four parts have arrived. Store `&stock` in your pointer and add the new parts through `*pointer`. That updates the existing variable, which is what the final print should read.

## Your Task

1. Create an `int *` that points to the supplied `stock`; use the pointer to add 4 to the original integer and print `Stock: 11` followed by a newline. Do not change `stock` directly or print a hard-coded 11.
