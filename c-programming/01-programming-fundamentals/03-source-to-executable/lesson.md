---
title: From a C file to a running program
slug: source-to-executable
order: 3
language: c
lesson_type: informational
runtime: server
summary: Trace source, compiler, object code, linker, executable, and run.
seo_title: From a C file to a running program | Learn C Programming
seo_description: Trace source, compiler, object code, linker, executable, and run.
seo_keywords:
- programming fundamentals
- C beginners
- source to executable
---
# From source file to running program

![C source is compiled into object code, linked into an executable, and then run.](c-source-build-run-pipeline.svg)

Write your C instructions in a text file such as `main.c`. The compiler checks the source and translates it into object code. The linker combines that object code with the library code it needs to make an executable. Running the executable starts the program. If you edit `main.c`, you must build again; the old executable does not change on its own.

With GCC, `gcc -std=c11 -Wall -Wextra main.c -o main` compiles and links the file. On a Unix-like terminal, `./main` runs it; on Windows, use the executable's name. A missing semicolon can stop compilation. A program that compiles but prints the wrong donation count has a different problem: its instructions are valid C, but the logic needs fixing.

Follow the workshop sign through the diagram. A missing semicolon shows up at compilation; an incorrect starting count may not become obvious until you run the program.
