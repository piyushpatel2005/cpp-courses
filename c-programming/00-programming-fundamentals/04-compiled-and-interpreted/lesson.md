---
title: Compiled and interpreted programs
slug: compiled-and-interpreted
order: 4
language: c
lesson_type: informational
runtime: server
summary: Compare a compiled C workflow with execution through an interpreter without
  oversimplifying either.
seo_title: Compiled and interpreted programs | Learn C Programming
seo_description: Compare a compiled C workflow with execution through an interpreter
  without oversimplifying either.
seo_keywords:
- programming fundamentals
- C beginners
- compiled and interpreted
---
# Two common ways to run a program

C usually goes through a compiler and linker before you run the resulting executable. A program in an interpreted language commonly runs through another program called an interpreter. That interpreter may translate the source to an intermediate form first. These are typical workflows, not permanent labels for languages: Python commonly uses an interpreter that may compile bytecode, and specialized interpreters can run C too.

For a workshop sign, the C route is `main.c` → compiler/linker → executable → printed line. A common Python route is `sign.py` → Python interpreter → printed line. Both ultimately give the computer instructions to execute. Here we'll use C, which makes types, memory, and building an executable worth paying attention to.

If you change the sign in `main.c` but run the executable you built earlier, you'll still see the old wording. Build again to include the edit.
