---
title: Where the storage comes from
slug: automatic-and-allocated
order: 1
language: c
lesson_type: informational
runtime: server
summary: Contrast local automatic objects with allocated storage and their lifetimes.
seo_title: Where the storage comes from | Learn C Programming
seo_description: Contrast local automatic objects with allocated storage and their
  lifetimes.
seo_keywords:
- programming fundamentals
- C beginners
- automatic and allocated
---

# Storage that outlives a function call

The local variables and arrays used so far have automatic storage duration. Their lifetime ends when execution leaves their block. An array with a fixed size works well when you know the needed capacity in advance. When you need to request storage while the program runs and decide later when to release it, `malloc` provides allocated storage.

The pointer holding an allocation's address may itself be a local variable. Leaving that pointer's block ends the pointer's lifetime, but does not automatically release the allocation. Call `free` when the allocation is no longer needed. Afterward, no copy of its old address can safely be used to access the released storage.

In the next program, `main` handles the entire job: request space, check the result, write the elements, and release the allocation.
