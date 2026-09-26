---
title: "Exercise: Calculate a Shop Total"
slug: exercise-shop-total
order: 5
language: c
lesson_type: coding
runtime: server
summary: "Use integer variables and arithmetic to calculate a purchase total."
seo_title: "Exercise: Calculate a Shop Total | Learn C Programming"
seo_description: "Use integer variables and arithmetic to calculate a purchase total."
seo_keywords: ["C programming", "C exercise shop total", "learn C for beginners"]
validation_rules:
  - type: equals
    target: output
    value: "Total: 21"
    message: "Print exactly 'Total: 21' (ignoring surrounding whitespace)."
hints:
  - "Compute price * quantity - discount and use %d to print the integer."
---

# Total after the discount

A market stall needs the final price after a discount. The starter already has `stdio.h` and `main`; work in the marked area. Multiply price by quantity before subtracting the discount. Run the program to see the receipt, then Submit.

## Your Task

1. Declare integer variables `price` = 6, `quantity` = 4, and `discount` = 3. Compute the final total using those variables, and print exactly `Total: 21` followed by a newline.

## Check the arithmetic

`price * quantity` gives 24; subtracting `discount` leaves 21. Print the value you calculated, not a hard-coded 21. The output check catches spelling and punctuation, but cannot tell whether you used the variables. Take a look at your expression before submitting.
