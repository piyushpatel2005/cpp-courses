---
title: "Exercise: Print a Formatted Label"
slug: exercise-formatted-stdout
order: 2
language: c
lesson_type: coding
runtime: server
summary: "Use printf to send formatted values to stdout."
seo_title: "Exercise: Print a Formatted Label | Learn C Programming"
seo_description: "Use printf to send formatted values to stdout."
seo_keywords: ["C programming", "exercise-formatted-stdout", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Carving: 5 places"
    message: "Print Carving: 5 places on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "printf\\s*\\([^;]*%s[^;]*%d"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Match format placeholders to activity and places in that order."
---

# Exercise: Print a Formatted Label

Five places remain in the carving session. Use the existing activity and count to print the sign; do not bake the values into the format string.

## Your Task

1. Use `printf`, `%s`, and `%d` with the existing variables to print `Carving: 5 places`.

Match the arguments to `%s` and `%d` in the order they appear.
