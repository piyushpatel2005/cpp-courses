---
title: "Exercise: Match printf placeholders and arguments"
slug: "exercise-print-a-donation-label"
order: 2
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Match C printf format conversions to ordered argument types."
seo_title: "Exercise: Match printf placeholders and arguments | Learn C Programming"
seo_description: "Match C printf format conversions to ordered argument types. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C match printf placeholders and arguments", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Table E: 3 radios in 2.5 hours"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["Place `table`, `radios`, and `tested_hours` after the format string in that order."]
---
# Print a radio test slip

Three donated radios at table E took 2.5 hours to test. Put the table letter, count, and time into one printed slip. The order of the arguments has to match the order of the placeholders.

## Your Task

1. Initialize `char table` to `'E'`, `int radios` to 3, and `double tested_hours` to 2.5. Use a single `printf` call to print exactly `Table E: 3 radios in 2.5 hours` and a newline.

Read the placeholders and arguments left to right if the letter and numbers land in the wrong places.
