---
title: "Exercise: Pass a Record to a Function"
slug: exercise-struct-argument
order: 8
language: c
lesson_type: coding
runtime: server
summary: "Pass a small struct by value to a printing function."
seo_title: "Exercise: Pass a Record to a Function | Learn C Programming"
seo_description: "Pass a small struct by value to a printing function."
seo_keywords: ["C programming", "exercise-struct-argument", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Badge 12: Ari"
    message: "Print Badge 12: Ari on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "print_badge\\s*\\(\\s*struct\\s+Badge"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Define the function above main and call it with badge."
---

# Exercise: Pass a Record to a Function

Ari has been assigned badge 12. Have `main` set up the badge and let a separate function print its details.

## Your Task

1. Define `print_badge(struct Badge badge)`, call it with the existing badge, and print `Badge 12: Ari`.

Pass the existing badge to your function; the parameter is a copy of that record.
