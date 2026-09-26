---
title: 'Exercise: Swap Two Counts'
slug: exercise-swap-counts
order: 4
language: c
lesson_type: coding
runtime: server
summary: Use two valid pointer parameters and a temporary value to swap caller integers.
seo_title: 'Exercise: Swap Two Counts | Learn C Programming'
seo_description: Use two valid pointer parameters and a temporary value to swap caller integers.
seo_keywords:
- C programming
- exercise swap counts
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'A: 9, B: 4'
  message: Check the complete printed output and line order.
hints:
- Save *left, set *left = *right, then set *right = saved.
---

# The labels are on the wrong shelves

Two shelf counts need to trade places. The function receives an address for each count. Save the value at `left` in a temporary integer before overwriting it, then put that saved value at `right`. Swapping the pointer parameters themselves would only exchange local copies of the addresses; the caller's integers would stay put.

## Your Task

1. Define `void swap_counts(int *left, int *right)` above `main` using a temporary integer and dereferences to exchange the pointed-to values. Keep the supplied call; it must print `A: 9, B: 4` followed by a newline.

Test by changing the starting counts locally, then restore them.
