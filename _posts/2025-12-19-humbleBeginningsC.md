---
title: Humble Beginnings - C
date: 2025-12-19 09:22:00 +0530
categories: [Humble Beginnings, C]
tags: [programming, hello-world, story]
description: The learning journey of C
image:
  path: /assets/img/covers/cProgramming.png
  alt: Cover image
pin: false
math: true
mermaid: true
comments: true
---
# Post 0: Why I came back to C

## Realization

Ok Let's take a walk through memory lane, back in the 2000s, *ahem, I think we went back a bit too far*. Back in 2022, After the global pandemic and me completing my PU, I had to choose an engineering course with no idea what any of them actually involved. My options were limited,
1. Computer Science Engineering
2. CSE
3. Maybe IT
4. None of the Above

Because I lazed around and my K-CET ranking came around 70 thousand, I had to be a bit creative on what course I chose, so now I had new options.
* Electrical and Electronics Engineering
* Electronics and Communications Engineering

Why? Because someone said, the first year will be the same for every discipline and I can change my branch after the first year, so my journey as an Electrical and Electronics Engineer began. I needed something related to CSE to keep me close to my hopes of changing my branch after the first year, that's when I started learning HTML, CSS, and C. I dropped them midway losing the interest. But at the 3rd year of my engineering journey, that spark re-ignited, to learn something new after witnessing the vast world of electronics, robotics and VLSI. I brushed off the dust on my old notes and sat with a pen and a lot of eye-blinding neon post-its. And the journey began, again!


## A bit of History

C is a general purpose programming language created by Dennis Ritchie (the guy in the cover image) at Bell labs in the 1970s. By design, C gives the programmer relatively direct access to the features of the typical CPU architecture, customized for the target instruction set. It is popular because it is fast, widely supported and helps you understand how programs works. UNIX was written in C, massive majority of modern computing infrastructure is either directly based on UNIX or uses UNIX design principles, so C is the foundational language.

C is used to create programs which can run fast, for example: Operating systems, game engines, core libraries of other programming languages etc. The only problem with C is that it doesn't support classes and objects, which are used for *object-oriented programming*, so **C++** was developed as *an extension of C*.

## The Familiarity

The first thing I returned to, was the classic `Hello World`. It’s probably the most overused first program in programming, I think it is sort of a ritual, a small prayer to the C gods, asking them to let one's programming journey sail a little smoother. (I think I unintentionally slipped in a dad joke there)

```c
#include<stdio.h>
int main(){
  printf("Hello World");
  return 0;
}
```

I'll dig into it in the next blog, as this blog is just a starting point for the journey.

## The Format

To not dump everything in a single post and make it unbearably long to read, I am going to keep it simple by posting the blog about the learning journey in parts. And also to make it reader friendly, rather than making a post for each week saying, "Week 1: I learned variables", I am going to group a bunch of things and dedicate a post to it. Each of this post will contain:
- What I learned
- Code snippets
- Roadblocks
- Next checkpoint
- References

This way, I can document the journey without turning it into a textbook.

## The Road Ahead

Here's the rough structure I'm planning for this C journey. If I miss something important, feel free to let me know in the comments, or there might be a possibility that I'm still stuck learning it.

1. [Post 0: Why I Came Back To C](#post-0-why-i-came-back-to-c)
2. Post 1: The Basics (variables, data types, input/output, operators)
3. Post 2: Learning to Think in Conditions (if, else, switch)
4. Post 3: Repetition, Errors, and Loops (for, while, do-while)
5. Post 4: Functions Make Things Feel Real
6. Post 5: Arrays, Strings, and the Shape of Data
7. Post 6: My First Fight With Pointers
8. Post 7: Structs, Files, and Small Programs
9. Post 8: Building Something Real in C
10. Post 9: Looking Back at What C Changed

## References

- [C (programming language)](https://en.wikipedia.org/wiki/C_(programming_language)) - Wikipedia
- [C Introduction](https://www.w3schools.com/c/c_intro.php) - w3schools
