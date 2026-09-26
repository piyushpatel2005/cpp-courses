---
title: 'Exercise: Add Daily Contributions'
slug: exercise-for-sum
order: 2
language: c
lesson_type: coding
runtime: server
summary: Use a for loop with an initialized accumulator and an inclusive limit.
seo_title: 'Exercise: Add Daily Contributions | Learn C Programming'
seo_description: Use a for loop with an initialized accumulator and an inclusive limit.
seo_keywords:
- C programming
- 'exercise: add daily contributions'
- learn C
validation_rules:
- type: equals
  target: output
  value: 'Collected: 15'
  message: Check your exact output, including capitalization and line order.
hints:
- Start day at 1, continue while day <= 5, and add day to total in the body.
---

# Add five days of contributions

Add the contributions from days 1 through 5. The starter gives you `total`; update it once per day, as in the running-total example. After each pass, you should have 1, 3, 6, 10, then 15. Check that day 5 gets its turn before the loop stops.

## Your Task

1. Use a `for` loop to add the numbers 1 through 5 into the supplied `total`, then print `Collected: 15` followed by a newline. Do not replace the calculation with a literal 15.
