---
title: 'Exercise: Gate an Inventory Diagnostic'
slug: exercise-conditional-compilation
order: 6
language: c
lesson_type: coding
runtime: server
summary: 'Wrap a debug print in #ifdef without changing the normal output.'
seo_title: 'Exercise: Gate an Inventory Diagnostic | Learn C Programming'
seo_description: 'Wrap a debug print in #ifdef without changing the normal output.'
seo_keywords:
- C programming
- exercise conditional compilation
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Debug stock: 6

    Stock: 6'
  message: Check the complete printed output and line order.
hints:
- 'Put the debug printf between #ifdef SHOW_DEBUG and #endif; put the other printf below.'
---

# Leave the public label readable

The stock report must always show its count. Its debug line belongs inside the `SHOW_DEBUG` block; the ordinary line belongs after `#endif`. The starter defines `SHOW_DEBUG` for this run.

## Your Task

1. Use `#ifdef SHOW_DEBUG` and `#endif` to print `Debug stock: 6` only while the name is defined. Always print `Stock: 6` afterward. With the supplied definition, the output has those two lines in that order.
