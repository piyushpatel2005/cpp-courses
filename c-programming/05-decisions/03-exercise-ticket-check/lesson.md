---
title: "Exercise: Choose a Ticket Message"
slug: exercise-ticket-check
order: 3
language: c
lesson_type: coding
runtime: server
summary: "Use if/else and a comparison to print a message for a fixed age."
seo_title: "Exercise: Choose a Ticket Message | Learn C Programming"
seo_description: "Use if/else and a comparison to print a message for a fixed age."
seo_keywords: ["C programming", "C exercise ticket check", "learn C for beginners"]
validation_rules:
  - type: equals
    target: output
    value: "Standard ticket"
    message: "Print exactly 'Standard ticket' (ignoring surrounding whitespace)."
hints:
  - "The comparison is age >= 12. Put one printf in each branch."
---

# Choose the ticket message

At the event booth, age 12 is the first age for a standard ticket. The starter already gives you `age`; write the branch that chooses the message. Use `>=` so 12 is included, not `=` (assignment).

## Your Task

1. If `age` is at least 12, print `Standard ticket`; otherwise print `Junior ticket`. Keep the fixed age at 14 so the submitted program prints exactly `Standard ticket` and a newline.

## Try either side of 12

Temporarily set `age` to 11, then 12. The first should print the junior message; the second, the standard one. Restore 14 before submitting. The output check only sees the age-14 result, so these two runs help you test the other path and the boundary.
