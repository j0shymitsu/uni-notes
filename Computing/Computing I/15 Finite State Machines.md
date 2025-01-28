# FINITE STATE MACHINES
28-01-25

--- 

## Overview
1. Definition and purpose of finite state machines.
2. Applications of FSMs in various fields.
3. Types of FSMs: Moore and Mealy machines.
4. Programming FSMs and practical examples.

---

## What is a Finite State Machine?
- **Definition**:
  - An abstract representation of how something transitions from one state to another in response to a condition or event.
- **Key Features**:
  - At any given time, the machine can be in only one state.
  - States and transitions are defined explicitly.
  - Transitions can loop back to the same state.

---

## Example: Simple Turnstile FSM
- **States**:
  1. Locked.
  2. Unlocked.
- **Transitions**:
  - Insert ticket → Unlocks turnstile.
  - Push arm when locked → No effect.
  - Insert another ticket when unlocked → No effect.
- **More Complex FSM**:
  - Valid and invalid tickets introduce additional transitions and states.

---

## Applications of FSMs
1. Robotics.
2. Digital hardware design.
3. Compiler design and network protocols.
4. Language definition and validation.
5. Video games:
   - Player states (e.g., idle, walk, run, attack).

---

## FSM Notation
- **States**: Represented as circles.
- **Transitions**: Represented as arrows labeled with conditions.
- FSMs can also be represented using **state transition tables**.

---

## Types of FSMs
1. **Moore Machines**:
   - Outputs depend only on the current state.
   - Outputs are labeled inside the state circles.
2. **Mealy Machines**:
   - Outputs depend on the current state and the input.
   - Outputs are labeled on the transitions.
   - **Advantages**:
     - Typically require fewer states and logic gates.

---

## Programming FSMs
- **Implementation**:
  - Use a variable to represent the current state (e.g., `state` variable).
  - Transitions managed using `if` or `switch/case` statements.
- **Example**:
  - A player character with states like idle, walk, run, attack.
  - Code handles transitions and associated actions (e.g., animations).

---

## Practical Examples
1. **NPC Guard in a Stealth Game**:
   - States: Patrol, alert, chase.
   - Transitions: Spotting or hearing the player.
2. **Shopping App**:
   - States: Browse, add to basket, checkout.
   - Transitions: Selecting items, confirming payment.
3. **Elevator**:
   - States: Moving up, moving down, idle.
   - Transitions: Open/close doors, visit floors.

---

## Finite State Automaton
- **Definition**:
  - A FSM without specific outputs.
  - Has a **start state** and one or more **end/accept states**.
  - Example:
    - A door lock system that processes sequences of transitions to unlock.

---

## Key Takeaways
1. FSMs model transitions between states based on inputs/events.
2. Moore and Mealy machines are common FSM classifications.
3. FSMs are widely used in algorithms, games, and system design.
4. Practice designing FSMs on paper before coding.

---

## Upcoming Test
- **Date**: 7th February 2025.
- **Topics**:
  - Number Systems, Logic Gates, Circuits, Probability, Machine Code, Compilers, Data Formats, and FSMs.