---
title: "Exercise: Allocate and Release Records"
slug: exercise-malloc-free
order: 7
language: c
lesson_type: coding
runtime: server
summary: "Check malloc for NULL before use and free allocated storage."
seo_title: "Exercise: Allocate and Release Records | Learn C Programming"
seo_description: "Check malloc for NULL before use and free allocated storage."
seo_keywords: ["C programming", "exercise-malloc-free", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Parts: 7"
    message: "Print Parts: 7 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "malloc\\s*\\(\\s*n\\s*\\*\\s*sizeof\\s*\\*\\s*parts\\s*\\)[\\s\\S]*if\\s*\\(\\s*parts\\s*==\\s*NULL\\s*\\)[\\s\\S]*free\\s*\\(\\s*parts\\s*\\)"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Use struct Part *parts; return on NULL before indexing."
---

# Exercise: Allocate and Release Records

The report needs three `struct Part` records. Allocate enough room for them at run time, then fill their counts only after confirming the request succeeded.

## Your Task

1. Allocate `n * sizeof *parts`, check NULL before use, fill counts 1, 2, 4, print `Parts: 7`, and free the allocation.

Read the counts for the print before calling `free`; after that call, the records are no longer available.
