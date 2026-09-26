---
title: 'Exercise: Average Workshop Ratings'
slug: exercise-array-average
order: 4
language: c
lesson_type: coding
runtime: server
summary: Find the local array length, total its elements, and avoid integer truncation.
seo_title: 'Exercise: Average Workshop Ratings | Learn C Programming'
seo_description: Find the local array length, total its elements, and avoid integer truncation.
seo_keywords:
- C programming
- exercise array average
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Average: 4.0'
  message: Check the complete printed output and line order.
hints:
- The element count is sizeof ratings / sizeof ratings[0]; convert total before division.
---

# Report the average rating

The feedback board has ratings 3, 4, and 5. Find the number of entries with `sizeof` rather than typing the length into the loop. Once you have their total, convert it before division so C does floating-point division rather than truncating an integer result. Print the `double` with `%.1f` for one decimal place.

## Your Task

1. Calculate the number of elements in the supplied `ratings` array using `sizeof`; loop over exactly those elements to add them to `total`; print `Average: 4.0` followed by a newline. Do not print a hard-coded average.

Try a different set of ratings locally and restore the starter before submitting.
