---
title: LED Blink & PWM
date: 2025-10-27
categories: [Projects, Arduino]
tags: [arduino, Deutsch-Diary, projects]
---

# Project 01

I’ve done this project a million times before, but never actually documented it anywhere. As I mentioned at the start, this website is my space to track and record detailed documentation of every project I build. If you haven’t read my previous blog, <a href="https://samarthhgowdaa.github.io/posts/whereItAllBegan/" target="_blank">check it out!</a>

## Introduction
---

The first thing everyone does after getting an Arduino is making that built-in LED blink and that’s where the magic begins. So what next? Let’s connect a few wires and make the software talk to the hardware.

Before we start, you might want to go through my previous blogs on <a href="https://samarthhgowdaa.github.io/posts/Arduino/" target="_blank">Arduino</a>, <a href="https://samarthhgowdaa.github.io/posts/projects/" target="_blank">Projects</a>, and the <a href="" target="_blank">Catalogue</a>, which is basically a guide to my projects in sequential order.

So without further ado, let’s get started!

## Tier 01
---

The main goal of this stage is simple, plug in a single LED to the Arduino and get it to blink. For that, you’ll need the <a href="https://www.arduino.cc/en/software/" target="_blank">Arduino IDE</a> and a bit of C++ knowledge. I learned through a bunch of YouTube tutorials on how to code, compile, and run sketches, still very much a beginner though.

>Gotta remember these shortcuts, gonna help in the long run
>* ctrl + s = save
>* ctrl + r = run the code
>* ctrl + u = upload the code
{: .prompt-info}

### Components

![components list](/assets/img/projects/project01/comp_tier1.png){: width="400" height="auto"}

These are the components I used for this tier, nothing fancy, just an LED blinking setup.

### Schematic

![Schematic](/assets/img/projects/project01/tier1_schematic.png){: width="400" height="auto"}

### Circuit

![Circuit](/assets/img/projects/project01/tier1_tinkerckt.png){: width="400" height="auto"}

### Code

This looked quite different from standard C++ to me at first. Many call it *Embedded C*, but technically, there’s no separate language called that, it’s just C/C++ used for embedded systems.

```cpp
int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(100); // Wait for 100 milliseconds
  digitalWrite(ledPin, LOW);
  delay(100); // Wait for 100 milliseconds
}
```
### Output

{% include embed/youtube.html id='rqMpww0s4OE' %}

