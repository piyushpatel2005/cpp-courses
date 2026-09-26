---
title: "Exercise: Keep local names and constants clear"
slug: "exercise-set-a-fixed-kit-limit"
order: 8
language: "c"
lesson_type: "coding"
runtime: "server"
summary: "Use const for a fixed C value and understand a name limited to its block."
seo_title: "Exercise: Keep local names and constants clear | Learn C Programming"
seo_description: "Use const for a fixed C value and understand a name limited to its block. Follow a neighborhood repair workshop example."
seo_keywords: ["C programming", "C keep local names and constants clear", "beginner C exercises"]
validation_rules:
  - type: equals
    target: "output"
    value: "Free slots: 5\nSlot limit: 12"
    message: "Match the requested output exactly (surrounding whitespace is ignored)."
hints: ["Declare the fixed value outside the inner braces so both prints can access it."]
---
# Count free kit slots

A first-aid kit has a fixed limit of twelve slots; seven are filled. Calculate the free slots inside a small block. After that block, you can still print the limit, but a name created inside it is no longer available.

## Your Task

1. Inside `main`, declare `const int slot_limit = 12` and `int filled = 7`. In an inner block calculate `int free_slots` from those names and print `Free slots: 5`. After the block print `Slot limit: 12`. End both lines with newlines.

`slot_limit` remains available for the second line because you declared it outside the inner braces. Keep `free_slots` inside.
