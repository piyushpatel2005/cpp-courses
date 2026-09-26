---
title: "Exercise: Build lines with escapes and multiple calls"
slug: "exercise-print-a-pickup-note"
order: 4
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Use multiple C printf calls and newline, quote, and backslash escapes."
seo_title: "Exercise: Build lines with escapes and multiple calls | Learn C Programming"
seo_description: "Use multiple C printf calls and newline, quote, and backslash escapes. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C build lines with escapes and multiple calls", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Clock: \"ready\"\nDesk \\ pickup"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["The first call can end at `Clock: `; the next finishes the line with `\\n`."]
---
# Write a clock pickup note

A clock is waiting at the pickup desk. Print its two-line note with quotation marks around "ready" and a visible backslash in the route. Use separate `printf` calls, as you did for the lantern.

## Your Task

1. Use at least two `printf` calls to print exactly two lines: `Clock: "ready"` and `Desk \ pickup`. End each line with a newline; use string escapes rather than inserting a literal line break inside a string.

Check that the result has two lines and only one visible backslash on the second.
