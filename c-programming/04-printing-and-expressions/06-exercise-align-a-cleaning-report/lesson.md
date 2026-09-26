---
title: "Exercise: Print percent signs and aligned values"
slug: "exercise-align-a-cleaning-report"
order: 6
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Use %% for a literal percent sign and printf width and precision for aligned C output."
seo_title: "Exercise: Print percent signs and aligned values | Learn C Programming"
seo_description: "Use %% for a literal percent sign and printf width and precision for aligned C output. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C print percent signs and aligned values", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Clean:   7 | Soap: 1.25 L | Target: 70%"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["A one-digit value in `%3d` gets two leading spaces; `%%` uses no extra argument."]
---
# Line up a cleaning report

The cleaning team wants its count, soap volume, and target on one line. Preserve the leading spaces before the count so a one-digit number sits in the same column as larger numbers.

## Your Task

1. Initialize `int cleaned` to 7 and `double liters` to 1.25. Print exactly `Clean:   7 | Soap: 1.25 L | Target: 70%` and a newline, using `%3d`, `%.2f`, and `%%` in the format string.

Look for two spaces before 7 and a percent sign after 70; `%3d` and `%%` produce them.
