---
title: "Exercise: Format into a Bounded Buffer"
slug: exercise-bounded-formatting
order: 6
language: c
lesson_type: coding
runtime: server
summary: "Use snprintf, check truncation, then print the finished label."
seo_title: "Exercise: Format into a Bounded Buffer | Learn C Programming"
seo_description: "Use snprintf, check truncation, then print the finished label."
seo_keywords: ["C programming", "exercise-bounded-formatting", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Shelf #3"
    message: "Print Shelf #3 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "snprintf\\s*\\(\\s*label\\s*,\\s*sizeof\\s+label"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Check written < 0 or (size_t)written >= sizeof label before puts."
---

# Exercise: Format into a Bounded Buffer

The shelf label is short, but it still has to fit in `label`. Format it into the array and check the return value before showing it.

## Your Task

1. Use `snprintf(label, sizeof label, ...)` to create `Shelf #3`; check error/truncation before printing it.

A return value equal to the capacity means truncation. Do not print the label in that case, even if the buffer contains a terminated partial string.
