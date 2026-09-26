---
title: "Exercise: Alias a Record Type with typedef"
slug: exercise-typedef-record
order: 4
language: c
lesson_type: coding
runtime: server
summary: "Give a struct type a short alias using typedef."
seo_title: "Exercise: Alias a Record Type with typedef | Learn C Programming"
seo_description: "Give a struct type a short alias using typedef."
seo_keywords: ["C programming", "exercise-typedef-record", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Ribbon: 4 meters"
    message: "Print Ribbon: 4 meters on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "typedef\\s+struct\\s*\\{[\\s\\S]*\\}\\s*RibbonRecord\\s*;"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Define the typedef before main and initialize its members in field order."
---

# Exercise: Alias a Record Type with typedef

The ribbon ledger needs a type for entries with a label and a length in meters. Name that type `RibbonRecord`, then use it for the entry you print.

## Your Task

1. Use `typedef struct` to define `RibbonRecord` with label and meters, then print `Ribbon: 4 meters`.

After defining the alias, declare and initialize an actual `RibbonRecord` object before accessing its fields.
