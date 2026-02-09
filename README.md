# Smart-Lighting-Sensor-Control

## Project Overview
This project is a functional simulation of a sequential motion-tracking system, designed with **Automotive and Mechatronics** applications in mind (e.g., smart interior lighting or industrial safety zones). The system ensures that lights are being activated and deactivated in a strictly defined sequence based on sensor triggers.

## Engineering Principles
As a Mechanical Engineer who is really into Mechatronics, I focused on core control of the system:
* **Input Validation:** The system uses do-while loops to wait for a physical signal (0 or 1), to prevent "ghost" triggers.
* **State management:** System prevent from activate light 2, before light 1 activation.
* **Infinite cycle:** 'while(true)' loop allows for continuous operation.

## How does it work?
The simulation follows 3-stage corridor sequence:
* **Entry:** Trigger sensor 1 in order to activate light 1.
* **Transition:** Trigger sensor 2 to deactivate light 1 and activate light 2.
* **Exit:** Triggering sensor 3 deactivates light 2 and turns on light 3.
* **Auto reset:** After completing a full cycle, the system reset itself.

## Future development:
* **Hardware integration:** I want to implement the logic of this program to Arduino.
* **Add counter:** I want to add a tracker, which will count people who passed through the system.
* **Add timer:** I want to add a timer which will count time of the movement.
