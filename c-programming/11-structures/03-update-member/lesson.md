---
title: "Update a Record Member"
slug: update-member
order: 3
language: c
lesson_type: interactive
runtime: server
summary: "Initialize a struct and update one member with dot notation."
seo_title: "Update a Record Member | Learn C Programming"
seo_description: "Initialize a struct and update one member with dot notation."
seo_keywords: ["C programming", "update-member", "workshop records"]
---

# Update a Record Member

A carton of markers arrives after the donation count was recorded. You can update just `entry.boxes` with dot notation; the item name stays as it was.

```c run
#include <stdio.h>
struct Donation { const char *item; int boxes; };
int main(void) {
    struct Donation entry = {"Markers", 2};
    entry.boxes += 1;
    printf("%s: %d boxes\n", entry.item, entry.boxes);
    return 0;
}
```

Run it once to see `Markers: 3 boxes`. Then remove `entry.boxes += 1;` temporarily: the count drops back to 2 while the name stays Markers.
