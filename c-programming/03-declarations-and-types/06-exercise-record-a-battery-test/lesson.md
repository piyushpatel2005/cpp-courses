---
title: "Exercise: Choose int, double, and char"
slug: "exercise-record-a-battery-test"
order: 6
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Use int, double, and char for whole counts, decimal measurements, and single-character labels."
seo_title: "Exercise: Choose int, double, and char | Learn C Programming"
seo_description: "Use int, double, and char for whole counts, decimal measurements, and single-character labels. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C choose int, double, and char", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Battery A: 4 cells, 6.5 V"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["Match `%c`, `%d`, and `%.1f` to grade, cells, and volts."]
---
# Write a battery test label

A battery's grade is a letter, its cell count is a whole number, and its voltage has a fractional part. Store each in the right type before printing the test result.

## Your Task

1. Initialize `int cells` to 4, `double volts` to 6.5, and `char grade` to `'A'`. Print exactly `Battery A: 4 cells, 6.5 V` with a newline using the matching conversions.

A voltage of 6 instead of 6.5 is a clue to check both the `double` value and `%.1f`.
