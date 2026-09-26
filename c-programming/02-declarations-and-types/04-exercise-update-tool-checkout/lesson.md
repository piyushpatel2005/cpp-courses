---
title: "Exercise: Assign a new value"
slug: "exercise-update-tool-checkout"
order: 4
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Distinguish C variable initialization from later assignment."
seo_title: "Exercise: Assign a new value | Learn C Programming"
seo_description: "Distinguish C variable initialization from later assignment. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C assign a new value", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Clamps out: 6"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["Assignment reads `clamps_out` on the right before replacing it on the left."]
---
# Update the checkout board

Three clamps have been returned to the checkout desk. Start with the number borrowed, subtract the returns, and print the count that remains. Printing the answer as a fixed number would skip the update you're practicing.

## Your Task

1. Initialize `int clamps_out` to 9, then use an assignment to subtract 3 from that variable. Print exactly `Clamps out: 6` with a newline using the updated variable.

If the board still says nine, move the assignment before the print call.
