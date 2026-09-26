---
title: "Exercise: Walk an Array of Records"
slug: exercise-array-of-structs
order: 6
language: c
lesson_type: coding
runtime: server
summary: "Index an array of structs and read each selected member."
seo_title: "Exercise: Walk an Array of Records | Learn C Programming"
seo_description: "Index an array of structs and read each selected member."
seo_keywords: ["C programming", "exercise-array-of-structs", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Sheets: 9"
    message: "Print Sheets: 9 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "stacks\\s*\\[\\s*i\\s*\\]\\s*\\.\\s*sheets"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Read stacks[i].sheets while i < 3."
---

# Exercise: Walk an Array of Records

The printer has blue, green, and red stacks of flyers. Add the sheet counts across all three records instead of entering the total by hand.

## Your Task

1. Loop over three `stacks` records, add their `.sheets`, and print `Sheets: 9`.

The last valid index is 2. A loop that reaches index 3 reads past the array.
