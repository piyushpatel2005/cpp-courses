---
title: "Exercise: Add Array Elements"
slug: exercise-array-total
order: 2
language: c
lesson_type: coding
runtime: server
summary: "Loop over an int array without going past its last index."
seo_title: "Exercise: Add Array Elements | Learn C Programming"
seo_description: Loop over an int array without going past its last index.
seo_keywords: ["C programming", "C exercise array total", "learn C for beginners"]
validation_rules:
  - type: equals
    target: output
    value: "Visitors: 20"
    message: "Print exactly 'Visitors: 20' (ignoring surrounding whitespace)."
hints:
  - "Loop while i < 4 and add visitors[i] on every pass."
---

# Exercise: Add Array Elements

The starter has four daily counts in `visitors` and a `total` set to zero. Add each element once, starting at index 0 and stopping after index 3. A condition of `i <= 4` would attempt an out-of-bounds access. Print the result after the loop.

## Your Task

1. Use a `for` loop to add all four elements of `visitors` to `total`; then print exactly `Visitors: 20` followed by a newline.

## Check your loop

The output check sees the total, not how you calculated it. Make sure the index moves on each pass and that you add `visitors[i]` rather than a fixed value.
