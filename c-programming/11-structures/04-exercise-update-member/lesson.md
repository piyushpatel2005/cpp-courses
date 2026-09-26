---
title: "Exercise: Update a Record Member"
slug: exercise-update-member
order: 4
language: c
lesson_type: coding
runtime: server
summary: "Initialize a struct and update one member with dot notation."
seo_title: "Exercise: Update a Record Member | Learn C Programming"
seo_description: "Initialize a struct and update one member with dot notation."
seo_keywords: ["C programming", "exercise-update-member", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Poster paper: 6 rolls"
    message: "Print Poster paper: 6 rolls on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "poster\\s*\\.\\s*rolls\\s*\\+=\\s*2"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Use poster.rolls += 2 before printf."
---

# Exercise: Update a Record Member

The poster-paper record says four rolls, and two more have arrived. Change the stored count before printing the label.

## Your Task

1. Add two to `poster.rolls` using dot notation and print `Poster paper: 6 rolls`.

If you still see four rolls, make sure the update happens before `printf`.
