---
title: "Exercise: Print Characters with putchar"
slug: exercise-character-output
order: 4
language: c
lesson_type: coding
runtime: server
summary: "Write individual characters to stdout with putchar."
seo_title: "Exercise: Print Characters with putchar | Learn C Programming"
seo_description: "Write individual characters to stdout with putchar."
seo_keywords: ["C programming", "exercise-character-output", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "GO"
    message: "Print GO on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "putchar\\s*\\("
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Put a single quoted character into each call."
---

# Exercise: Print Characters with putchar

The collection basket needs a short `GO` mark. Build the line one character at a time.

## Your Task

1. Call `putchar` for G, O, and newline so stdout contains `GO`.

Include a separate newline call so the next terminal prompt does not share the `GO` line.
