---
title: "Exercise: Name a Status with enum"
slug: exercise-enum-status
order: 2
language: c
lesson_type: coding
runtime: server
summary: "Use an enum name instead of an unexplained integer status."
seo_title: "Exercise: Name a Status with enum | Learn C Programming"
seo_description: "Use an enum name instead of an unexplained integer status."
seo_keywords: ["C programming", "exercise-enum-status", "workshop records"]
validation_rules:
  - type: equals
    target: output
    value: "Confirmed: 1"
    message: "Print Confirmed: 1 on stdout (outer whitespace ignored)."
  - type: regex
    target: code
    value: "enum\\s+Signup\\s*\\{\\s*WAITING\\s*,\\s*CONFIRMED"
    message: "Use the requested C construct instead of printing a fixed answer."
hints:
  - "Declare the enum before main; compare state == CONFIRMED."
---

# Exercise: Name a Status with enum

The applicant is confirmed. Give that status a name so the comparison reads like a check of the application, not a test against an unexplained number.

## Your Task

1. Declare `enum Signup` with WAITING and CONFIRMED; initialize CONFIRMED and print `Confirmed: 1` using a comparison.

Compare `state` with CONFIRMED. Printing a literal 1 would hide the decision the code is meant to make.
