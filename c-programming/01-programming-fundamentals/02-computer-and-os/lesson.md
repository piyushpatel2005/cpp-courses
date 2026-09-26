---
title: The computer and the operating system
slug: computer-and-os
order: 2
language: c
lesson_type: informational
runtime: server
summary: Distinguish instructions, memory, input/output, and the operating system.
seo_title: The computer and the operating system | Learn C Programming
seo_description: Distinguish instructions, memory, input/output, and the operating
  system.
seo_keywords:
- programming fundamentals
- C beginners
- computer and os
---
# Where a program lives while it runs

The workshop's program starts as a file on storage. When someone runs it, the computer puts its instructions and working data in memory. The processor follows those instructions, doing calculations and comparisons. A keyboard, a file, or a terminal window lets the program receive input or send output.

The operating system starts programs and manages the resources they share. It arranges access to memory and files and receives a program's exit status. A C program can use its services to write to the terminal without knowing how the display hardware works.

Think about a donation count when the power goes out. A total held only in working memory is lost; one saved to a file can survive. For now, we'll print our results rather than save them.
