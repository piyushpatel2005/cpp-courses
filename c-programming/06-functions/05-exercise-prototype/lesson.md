---
title: 'Exercise: Declare and Convert'
slug: exercise-prototype
order: 5
language: c
lesson_type: coding
runtime: server
summary: Declare a function before main and define it after main.
seo_title: 'Exercise: Declare and Convert | Learn C Programming'
seo_description: Declare a function before main and define it after main.
seo_keywords:
- C programming
- 'exercise: declare and convert'
- learn C
validation_rules:
- type: equals
  target: output
  value: 'Items: 24'
  message: Check your exact output, including capitalization and line order.
hints:
- The prototype has a semicolon and no body; the definition has the same types and a return statement.
---

# Count the items in the boxes

A stock list counts boxes, but the display needs individual items. Declare the conversion function above `main` so the compiler can check the call. Define it below `main`, where it can multiply boxes by items per box.

## Your Task

1. Declare `int items_in_boxes(int boxes, int per_box);` before `main` and define it after `main` to return the product. Leave the supplied call unchanged: the complete output must be `Items: 24` and a newline.
