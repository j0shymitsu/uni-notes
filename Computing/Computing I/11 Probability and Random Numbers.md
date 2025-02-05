# PROBABILITY AND RANDOM NUMBERS
10-12-24

---

## Content Overview
1. Introduction to Probability.
2. Simple and Compound Probability.
3. Probability Curves and Normal Distribution.
4. The Monty Hall Problem.
5. Dependent Events and Tree Diagrams.
6. Random Numbers and Their Applications.
7. Pseudo-Randomness and Random Seeds.

---

## Introduction to Probability
- **Definition**:
  - Probability measures the likelihood of an event occurring.
  - Expressed as a value between `0` (impossible) and `1` (certain).
- **Example**:
  - A coin flip has **two possible outcomes** (heads or tails).
  - Probability of heads: `1/2`.

---

## Simple and Compound Probability
- **Simple Probability**:
  - The probability of a single event occurring.
  - Example: Rolling a `3` on a six-sided die → `1/6`.
- **Compound Probability**:
  - The probability of multiple independent or dependent events occurring.
  - **Independent Events**:
    - The outcome of one event **does not affect** another.
    - Example: Multiple coin flips remain `1/2` per flip.
  - **Dependent Events**:
    - The outcome of one event **affects** another.
    - Example: Drawing a card **without replacement** changes future probabilities.

---

## Probability Curves and Normal Distribution
- **Rolling Multiple Dice**:
  - When rolling **one die**, all numbers are equally likely.
  - When rolling **two dice**, results tend to cluster (e.g., `7` is the most likely sum).
  - **More dice = a curve approaching a normal distribution**.
- **Normal Distribution**:
  - Many natural phenomena (e.g., height, weight, IQ) follow this pattern.
  - Defined using **mean (average)** and **standard deviation**.

---

## The Monty Hall Problem
- **Scenario**:
  - A game show presents three boxes, one containing a prize.
  - You select a box, and the host (who knows the prize location) opens a losing box.
  - You are then given the option to **switch** or **stay**.
- **Correct Strategy**:
  - Always **switch** – this increases the probability of winning from **1/3 to 2/3**.
  - Explanation:
    - Initially, you have a `1/3` chance of picking the prize.
    - The host **removes a losing option**.
    - The other unopened box now has a `2/3` chance of containing the prize.

---

## Dependent Events and Tree Diagrams
- **Tree Diagrams**:
  - Used to visualize probability steps.
  - Example:
    - A bag contains **4 red** and **5 blue** balls.
    - If drawing without replacement, the probability of a second red ball depends on the first draw.

---

## Random Numbers and Their Applications
- **Randomness in Computing**:
  - Used for games, simulations, cryptography, and procedural generation.
- **Key Concept**:
  - Random events **may not be predictable short-term** but show **patterns over time**.
  - Example: Enemy AI in a game fires at irregular intervals, but averages one shot per 5 seconds.

---

## Pseudo-Random Numbers
- **True Random vs. Pseudo-Random**:
  - Computers generate **pseudo-random** numbers using algorithms.
  - These sequences **appear random** but eventually **repeat**.
- **Example**:
  - A calculator generates: `0,5,2,4,8,9,4,0,6,3...`
  - If the algorithm is known, the sequence can be **predicted**.

---

## Improving Randomness
- **Sources of True Randomness**:
  - Use **external inputs** like:
    - Mouse movement.
    - Time since the last keystroke.
  - These inputs **introduce unpredictability**, useful for encryption.
- **Controlled Randomness (Seeds)**:
  - A **random seed** ensures **repeatable** results.
  - Example:
    - In procedural games, a specific **seed value** allows players to generate the **same random world**.
    - Used in replays to **replicate** game events.

---

## Key Takeaways
1. **Probability** measures the likelihood of events occurring.
2. **Normal distributions** model real-world randomness.
3. **Monty Hall problem** demonstrates counterintuitive probability strategies.
4. **Random numbers** are crucial for simulations, AI, and security.
5. **Pseudo-random numbers** repeat over time but can be improved with external factors.

---

## Additional Resources
- **Podcast**: *The Science of Coincidence* (available on Moodle).
- **Further Reading**:
  - Bellos, A. (2014). *World Cup Birthday Paradox*.
  - Stephanie (2013). *IQ Score Curves*.
  - Weisstein, E. *Dice Probability Curves*.
