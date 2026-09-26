---
title: "Exercise: Define a Supply Record"
slug: exercise-define-struct
order: 2
language: c
lesson_type: coding
runtime: server
summary: "Define a struct to group related fields."
seo_title: "Exercise: Define a Supply Record | Learn C Programming"
seo_description: "Define a struct to group related fields."
seo_keywords: ["C programming", "exercise-define-struct", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Thread: 6"
    message: "Print Thread: 6 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "struct\\s+Supply\\s*\\{"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "The type declaration goes above main; remember its final semicolon."
---

# Exercise: Define a Supply Record

The sewing table has six spools of thread. Give that supply a record so its label and quantity travel together.

## Your Task

1. Declare `struct Supply` with `const char *label` and `int units`; initialize Thread and 6 units; print `Thread: 6`.

Check that you declared the type above `main`; two separate variables will not satisfy the `struct Supply` requirement.
