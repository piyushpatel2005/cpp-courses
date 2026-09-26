---
title: 'Exercise: Verify a Pickup Code'
slug: exercise-compare-codes
order: 4
language: c
lesson_type: coding
runtime: server
summary: Use strcmp to check a whole code and print one result.
seo_title: 'Exercise: Verify a Pickup Code | Learn C Programming'
seo_description: Use strcmp to check a whole code and print one result.
seo_keywords:
- C programming
- exercise compare codes
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: Release item
  message: Check the complete printed output and line order.
hints:
- strcmp returns zero when the character sequences are equal.
---

# Release the right repair

A pickup code has to match character for character before the item is released. Compare `entered` and `issued` with `strcmp(...) == 0`. Comparing their addresses with `==` would not tell you whether the text matches.

## Your Task

1. Compare `entered` with `issued` using `strcmp`; print `Release item` when they match, or `Ask for code` otherwise. Keep the supplied strings unchanged for submission, producing exactly `Release item` and a newline.

As a second check, change a single character locally and confirm the other branch, then restore it.
