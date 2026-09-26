---
title: 'Exercise: Start Station Counters at Zero'
slug: exercise-calloc-stations
order: 5
language: c
lesson_type: coding
runtime: server
summary: Allocate zero-initialized counters, update one, then free them.
seo_title: 'Exercise: Start Station Counters at Zero | Learn C Programming'
seo_description: Allocate zero-initialized counters, update one, then free them.
seo_keywords:
- C programming
- exercise calloc stations
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Stations: 0, 0, 4'
  message: Check the complete printed output and line order.
hints:
- calloc(stations, sizeof *visits) begins with zeroed int elements. Check and free the result.
---

# Set up the station log

The three stations start with zero visits. Use `calloc` for their counters, then update only the third element to 4. The first two can keep their zero starting values. Check the returned pointer before accessing any of them.

## Your Task

1. Allocate three `int` counters with `calloc`, return 1 if it fails, set element 2 to 4, print `Stations: 0, 0, 4` followed by a newline from the array elements, and free the storage before returning 0.
