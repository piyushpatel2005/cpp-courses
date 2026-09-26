---
title: 'Exercise: Update Each Stock Count'
slug: exercise-adjust-array
order: 4
language: c
lesson_type: coding
runtime: server
summary: Write a void function that updates every in-bounds array element.
seo_title: 'Exercise: Update Each Stock Count | Learn C Programming'
seo_description: Write a void function that updates every in-bounds array element.
seo_keywords:
- C programming
- exercise adjust array
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Stations: 5, 6, 7'
  message: Check the complete printed output and line order.
hints:
- Loop while i < count, adding extra to stations[i] each time.
---

# Receive a shipment

Each station receives two more packs. Have `add_delivery` visit every element and add `extra` directly to it. The print in `main` reads the original array after the call, so its values will show whether your changes reached the caller.

## Your Task

1. Define `void add_delivery(int stations[], size_t count, int extra)` above `main`. Add `extra` to each of the `count` elements. Keep the supplied call so the program prints `Stations: 5, 6, 7` with a newline.
