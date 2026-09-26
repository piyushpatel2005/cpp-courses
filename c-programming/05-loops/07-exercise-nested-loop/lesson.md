---
title: 'Exercise: Label Tool Drawers'
slug: exercise-nested-loop
order: 7
language: c
lesson_type: coding
runtime: server
summary: Use an outer row loop and an inner drawer loop to print every location.
seo_title: 'Exercise: Label Tool Drawers | Learn C Programming'
seo_description: Use an outer row loop and an inner drawer loop to print every location.
seo_keywords:
- C programming
- exercise nested loop
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Bay 1 Drawer 1

    Bay 1 Drawer 2

    Bay 2 Drawer 1

    Bay 2 Drawer 2'
  message: Check the complete printed output and line order.
hints:
- Begin the drawer loop inside the body of the bay loop.
---

# Label each tool drawer

A repair station has two bays, each with two drawers. Label every drawer in bay 1 before moving to bay 2. Use one loop for bays and another inside it for drawers; both limits should stop at 2.

## Your Task

1. Use nested `for` loops for bays 1–2 and drawers 1–2; print each label as `Bay 1 Drawer 1` and so on, one per line. The final line must be `Bay 2 Drawer 2`. Do not write four separate print calls.
