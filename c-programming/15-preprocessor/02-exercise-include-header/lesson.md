---
title: "Exercise: Include the Right Header"
slug: exercise-include-header
order: 2
language: c
lesson_type: coding
runtime: server
summary: "Include string.h to declare strlen."
seo_title: "Exercise: Include the Right Header | Learn C Programming"
seo_description: "Include string.h to declare strlen."
seo_keywords: ["C programming", "exercise-include-header", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Label length: 4"
    message: "Print Label length: 4 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "#include\\s*<string\\.h>"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Include string.h before main, then use strlen with %zu."
---

# Exercise: Include the Right Header

The storage team calls its tag `Bins`. Ask `strlen` for its length instead of putting the number 4 directly in the print statement.

## Your Task

1. Include `<string.h>`, call `strlen(label)`, and print `Label length: 4` with `%zu`.

Put the include above `main` so the compiler sees the `strlen` declaration before the call.
