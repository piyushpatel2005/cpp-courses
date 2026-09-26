---
title: "Exercise: Guard a Macro Default"
slug: exercise-guarded-limit
order: 4
language: c
lesson_type: coding
runtime: server
summary: "Contrast a guarded macro constant with a typed const object."
seo_title: "Exercise: Guard a Macro Default | Learn C Programming"
seo_description: "Contrast a guarded macro constant with a typed const object."
seo_keywords: ["C programming", "exercise-guarded-limit", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Open slots: 2"
    message: "Print Open slots: 2 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "#ifndef\\s+BADGE_LIMIT[\\s\\S]*#define\\s+BADGE_LIMIT\\s+6[\\s\\S]*#endif"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Put #ifndef, #define, #endif before main."
---

# Exercise: Guard a Macro Default

There are six badge slots, four of them occupied. Supply a fallback limit that will leave an existing `BADGE_LIMIT` alone.

## Your Task

1. Set a guarded `BADGE_LIMIT` default of 6; retain `const int occupied = 4`; print `Open slots: 2`.

Keep the directives above `main`; `occupied` remains a typed local `const int`.
