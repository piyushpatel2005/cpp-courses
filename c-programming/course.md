---
slug: c-programming
title: C Programming for Beginners
description: Start with how programs run, then write C for output, decisions, data, records, and memory.
language: c
level: Beginner
format: Interactive Lessons
summary: A first programming course with short demonstrations, workshop exercises, diagrams, and section quizzes.
seo_title: C Programming for Beginners | Interactive C Course
seo_description: "Learn programming fundamentals and C step by step: compilation, output, declarations, control flow, arrays, pointers, structures, unions, bits, the preprocessor, and memory."
seo_keywords: [learn C programming, C tutorial for beginners, C declarations, C arrays, C pointers, C exercises]
modules:
  - slug: programming-fundamentals
    title: How Programs Work
    sort_order: 1
  - slug: first-programs
    title: Your First C Programs
    sort_order: 2
  - slug: declarations-and-types
    title: Declarations and Types
    sort_order: 3
  - slug: printing-and-expressions
    title: Printing and Expressions
    sort_order: 4
  - slug: decisions
    title: Making Decisions
    sort_order: 5
  - slug: loops
    title: Loops and Repeated Work
    sort_order: 6
  - slug: functions
    title: Functions and Return Values
    sort_order: 7
  - slug: arrays-and-memory
    title: Arrays and Their Storage
    sort_order: 8
  - slug: strings
    title: Character Arrays and Strings
    sort_order: 9
  - slug: pointers
    title: Pointers, Addresses, and Lifetime
    sort_order: 10
  - slug: arrays-in-functions
    title: Arrays as Function Arguments
    sort_order: 11
  - slug: structures
    title: Grouping Data with Structures
    sort_order: 12
  - slug: unions
    title: Unions and Shared Storage
    sort_order: 13
  - slug: bitwise-operations
    title: Bits, Masks, and Shifts
    sort_order: 14
  - slug: preprocessor
    title: The Preprocessor
    sort_order: 15
  - slug: named-types
    title: Enums and Type Names
    sort_order: 16
  - slug: allocated-memory
    title: Allocated Memory and Lifetime
    sort_order: 17
  - slug: input-output
    title: Input and Output Safely
    sort_order: 18
---
# Small programs for a neighborhood repair workshop

First, find out what a program is and what happens between writing a source file and running it. We compare compiled and interpreted workflows before asking you to write much C. Then you will make signs for the repair desk, keep stock counts, check pickup codes, and record repairs. Each section gives you a small runnable example before asking you to try a different job yourself. A quiz closes the section.

The course draws on Stephen G. Kochan's *Programming in C*, fourth edition. Chapter 1 informs the opening section; Chapters 2–7 build the C basics; Chapters 8–10 lead into structures, strings, and pointers. Later sections draw on Chapters 11–13 and selected topics from Chapters 15–16: bitwise operations, the preprocessor, named types, input/output, unions, and allocated storage. The prose, programs, tasks, and diagrams are original. We put decisions before loops so you can read a condition before writing one, and give pointers their own section rather than burying them at the end of arrays.

On a machine with GCC, compile a complete example with `gcc -std=c11 -Wall -Wextra main.c -o main`, then run `./main`. The site's C runner may also be available. Some input and file operations require a local terminal; the relevant lessons say so. Output checks can confirm what a program printed, but not every possible path it might take. Try the suggested alternate values, especially around branch boundaries and pointer validity.

Diagrams show parts you cannot see by looking at output alone: how source becomes an executable, which array slot an index selects, what occupies a string's final byte, and how two pointer expressions reach one object. Trace the diagram against its code before running the example.
