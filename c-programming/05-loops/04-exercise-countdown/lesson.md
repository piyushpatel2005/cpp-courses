---
title: "Exercise: Make a Countdown"
slug: exercise-countdown
order: 4
language: c
lesson_type: coding
runtime: server
summary: "Use a while loop to produce a countdown and stop at zero."
seo_title: "Exercise: Make a Countdown | Learn C Programming"
seo_description: "Use a while loop to produce a countdown and stop at zero."
seo_keywords: ["C programming", "C exercise countdown", "learn C for beginners"]
validation_rules:
  - type: equals
    target: output
    value: "4\n3\n2\n1\nStart!"
    message: "Print exactly '4\\n3\\n2\\n1\\nStart!' (ignoring surrounding whitespace)."
hints:
  - "Use while (remaining > 0), print remaining, decrement it, then print Start! after the loop."
---

# Count down to Start

The launch sign needs a countdown, then one `Start!` message. Begin with `remaining = 4` and decrease it after each number. When it reaches 0, the loop should stop. Put `Start!` after the loop so you print it once.

## Your Task

1. Use a `while` loop with the supplied `remaining = 4` to print 4, 3, 2, and 1 on separate lines; then print `Start!` once. The complete output must be `4`, `3`, `2`, `1`, `Start!` on separate lines.

## Stop before zero prints

Trace `remaining`: 4 prints, then 3, 2, and 1; 0 fails the condition. If `Start!` is inside the loop, it appears four times. If the condition is `>= 0`, zero appears too. The output check catches those results, but look at your update as well to make sure the loop stops.
