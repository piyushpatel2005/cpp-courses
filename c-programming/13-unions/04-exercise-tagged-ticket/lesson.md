---
title: 'Exercise: Read a Tagged Repair Ticket'
slug: exercise-tagged-ticket
order: 4
language: c
lesson_type: coding
runtime: server
summary: Select the active union member from an enum tag.
seo_title: 'Exercise: Read a Tagged Repair Ticket | Learn C Programming'
seo_description: Select the active union member from an enum tag.
seo_keywords:
- C programming
- exercise tagged ticket
- C beginner exercises
validation_rules:
- type: equals
  target: output
  value: 'Grade: C'
  message: Check the complete printed output and line order.
hints:
- Match GRADE with value.grade and PARTS with value.count.
---
# Print the value on a tagged ticket

This ticket stores a grade rather than a parts count. Check its `kind` before choosing which union member to print. Reading `value.count` when `value.grade` was stored would not give you the ticket's grade.

## Your Task

1. Inspect `ticket.kind`. If it is `GRADE`, print `Grade: C` using the grade member; otherwise print the count member as `Parts: <number>`. Keep the supplied ticket as the grade case for submission.

To test the other branch, change the initializer and tag together, then restore the supplied grade case.
