---
title: 'Exercise: Check an Equipment Flag'
slug: exercise-check-flag
order: 2
language: c
lesson_type: coding
runtime: server
summary: Use a one-bit unsigned mask to report whether a flag is set.
seo_title: 'Exercise: Check an Equipment Flag | Learn C Programming'
seo_description: Use a one-bit unsigned mask to report whether a flag is set.
seo_keywords:
- C programming
- exercise check flag
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Inspected: 1'
  message: Check the complete printed output and line order.
hints:
- Use (flags & inspection) != 0u; cast the comparison to unsigned int for %u.
---
# Check the inspection bit

The equipment log stores several states in `flags`. Inspection uses bit 2, worth 4 when set. Test that one position with `&`. Comparing the entire number to 4 would fail if another flag were on too.

## Your Task

1. Use the supplied `inspection` mask to test `flags` with bitwise AND. Print `Inspected: 1` when the bit is set, or `Inspected: 0` otherwise, using `%u` and a boolean comparison in the print call. Keep the initial flags unchanged.
