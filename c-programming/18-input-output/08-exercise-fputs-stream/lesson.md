---
title: "Exercise: Write a Line to stdout with fputs"
slug: exercise-fputs-stream
order: 8
language: c
lesson_type: coding
runtime: server
summary: "Use fputs with stdout and an explicit newline."
seo_title: "Exercise: Write a Line to stdout with fputs | Learn C Programming"
seo_description: "Use fputs with stdout and an explicit newline."
seo_keywords: ["C programming", "exercise-fputs-stream", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Welcome desk ready"
    message: "Print Welcome desk ready on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "fputs\\s*\\([^;]*,\\s*stdout\\s*\\)"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Supply stdout as the second argument; include newline in the string."
---

# Exercise: Write a Line to stdout with fputs

The welcome desk needs a ready notice on stdout. Unlike `puts`, `fputs` does not append a newline.

## Your Task

1. Send `Welcome desk ready` and newline to `stdout` using `fputs`.

Put `\n` inside the string passed to `fputs` so the notice ends on its own line.
