---
title: 'Exercise: Total Readings in a Function'
slug: exercise-array-function
order: 2
language: c
lesson_type: coding
runtime: server
summary: Use an array parameter and separate count to sum an entire caller-owned array.
seo_title: 'Exercise: Total Readings in a Function | Learn C Programming'
seo_description: Use an array parameter and separate count to sum an entire caller-owned array.
seo_keywords:
- C programming
- exercise array function
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Boxes: 13'
  message: Check the complete printed output and line order.
hints:
- Use a size_t index less than count and return the accumulator.
---

# Total donated boxes

`main` already supplies the donated box counts and their length. Your function needs only to add elements at indexes below `count` and return the total. Keep the existing print in `main`; the function should calculate, not print.

## Your Task

1. Define `int sum_boxes(const int boxes[], size_t count)` above `main`. Loop over exactly `count` elements and return their sum. Keep the supplied call and print exactly `Boxes: 13` with a newline.

As a manual check, replace one box count and see whether the result changes; then restore it.
