---
title: 'Exercise: Record One Ticket Value'
slug: exercise-union-option
order: 2
language: c
lesson_type: coding
runtime: server
summary: Declare a union and read only the member most recently stored.
seo_title: 'Exercise: Record One Ticket Value | Learn C Programming'
seo_description: Declare a union and read only the member most recently stored.
seo_keywords:
- C programming
- exercise union option
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Priority: B'
  message: Check the complete printed output and line order.
hints:
- The declaration uses union TicketValue { int bay; char priority; };, followed by ticket.priority = 'B'.
---
# Record the ticket's priority

A repair ticket can carry a bay number or a priority letter. This batch needs the letter. Put both choices in a union, set `priority`, and print that same member; the earlier numeric value is no longer the one to use.

## Your Task

1. Declare `union TicketValue` with an `int bay` and a `char priority`, then set the active `priority` member to `'B'`. Print `Priority: B` followed by a newline by reading `priority`.
