---
title: What a program actually does
slug: what-a-program-does
order: 1
language: c
lesson_type: informational
runtime: server
summary: Follow instructions, input, storage, and output through a tiny workshop task.
seo_title: What a program actually does | Learn C Programming
seo_description: Follow instructions, input, storage, and output through a tiny workshop
  task.
seo_keywords:
- programming fundamentals
- C beginners
- what a program does
---
# Count the donations

At the neighborhood repair workshop, someone keeps track of donated tools. On paper, the instructions might say: start the tally at zero, add each donation, then show the total. A program gives the computer those instructions in enough detail to follow them. Skip the starting count and it cannot guess what you intended.

Suppose two people bring 2 and 3 tools. Those counts are the input. The program stores a running total, adds the counts, and displays 5 as output. If the total still contains yesterday's donations, the addition works but today's answer is wrong. The order of the steps matters as much as the arithmetic.

Before writing C, try the same idea on paper: write four steps for counting donated books. Where does the total start, and when do you show it?
