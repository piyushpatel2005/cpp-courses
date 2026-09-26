---
title: "Exercise: Return a Square"
slug: exercise-square-a-number
order: 3
language: c
lesson_type: coding
runtime: server
summary: "Define an int function that returns the square of its parameter."
seo_title: "Exercise: Return a Square | Learn C Programming"
seo_description: "Define an int function that returns the square of its parameter."
seo_keywords: ["C programming", "C exercise square a number", "learn C for beginners"]
validation_rules:
  - type: equals
    target: output
    value: "Area: 25"
    message: "Print exactly 'Area: 25' (ignoring surrounding whitespace)."
hints:
  - "The return type is int, so return side * side; rather than printing inside the function."
---

# Calculate a tile’s area

A square tile with side 5 has an area the caller wants to print. The starter already calls `square(5)` from `main` and prints the result. Define `square` above `main` so its declaration is visible at the call. Have the function return the area; leave printing to `main`.

## Your Task

1. Define `int square(int side)` above `main` to return `side * side`. Keep the call in `main` so the program prints exactly `Area: 25` and a newline.

## Try a second side length

The output check covers only `square(5)`. Try an argument of 3 and look for `Area: 9`, then restore 5. A hard-coded return of 25 would pass the submitted case but fail this one. Keep the multiplication in `square` and the print call in `main`.
