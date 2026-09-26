---
title: 'Exercise: Count a Letter in a Label'
slug: exercise-count-letter
order: 6
language: c
lesson_type: coding
runtime: server
summary: Loop through a C string and count matching characters.
seo_title: 'Exercise: Count a Letter in a Label | Learn C Programming'
seo_description: Loop through a C string and count matching characters.
seo_keywords:
- C programming
- exercise count letter
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Letters a: 3'
  message: Check the complete printed output and line order.
hints:
- Stop the loop when label[i] == '\0'; increment count for the character 'a'.
---

# Count the letter stencils

Count each lowercase `a` in the supplied sign label. Move through the string until `\0`, adding one only when the current character is `'a'`. An uppercase `A` should not contribute to this count.

## Your Task

1. Count lowercase `a` characters in the supplied `label` using a loop that stops at `\0`, and print exactly `Letters a: 3` followed by a newline. Do not hard-code the count.
