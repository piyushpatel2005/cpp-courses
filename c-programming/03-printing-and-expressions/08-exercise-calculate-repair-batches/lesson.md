---
title: "Exercise: Evaluate expressions before printing"
slug: "exercise-calculate-repair-batches"
order: 8
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Use C expression precedence and convert before division for a fractional result."
seo_title: "Exercise: Evaluate expressions before printing | Learn C Programming"
seo_description: "Use C expression precedence and convert before division for a fractional result. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C evaluate expressions before printing", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Reflectors: 8 | Whole: 2 | Average: 2.67"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["Convert `total` before dividing by `trays`; `%.2f` then rounds the display."]
---
# Divide reflectors among trays

Three trays hold two reflectors each, with two left over. Calculate the total, then show both the whole-number quotient and the fractional average. Use the total you computed for both divisions.

## Your Task

1. Initialize `int trays = 3`, `int per_tray = 2`, and `int extra = 2`. Compute `total` as trays times per_tray plus extra, `whole` as total divided by trays using integer division, and `average` as a double using conversion before division. Print exactly `Reflectors: 8 | Whole: 2 | Average: 2.67` and a newline.

Store the fractional result in a `double`. Converting before division retains the fraction that `%.2f` displays as 2.67.
