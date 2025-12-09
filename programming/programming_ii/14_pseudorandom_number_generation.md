# PSEUDORANDOM NUMBER GENERATION
N-D

---

## Contents

- Pseudorandom vs true random
- C `rand()` and seeding
- Linear Congruential Generators
- Problems with `rand()`
- `<random>` generators
- Seeding with `std::random_device`
- Distributions in `<random>`
- Custom and weighted distributions
- Summary

---

## Pseudorandom vs true random

- Most “random” numbers in programs are **pseudorandom**, meaning they are generated deterministically from an initial seed but appear random under certain criteria.
- A good pseudorandom sequence should give each value roughly equal probability over time and be hard to predict without knowing the generator and seed.
- True random values can be obtained from external sources or APIs, but pseudorandom generators are usually sufficient and easier to reproduce for debugging or simulations.

---

## C `rand()` and seeding

- The classic C function `rand()` produces pseudorandom integers from a global generator that is deterministic given the same starting seed.
- Running a simple loop that prints `rand()` values twice without reseeding will generate exactly the same sequence each time.
- To vary the sequence between runs, `srand(time(0));` is often used so the seed comes from the system clock, causing different sequences at different times.

---

## Linear Congruential Generators

- A **Linear Congruential Generator (LCG)** is a simple historical method for PRNGs, defined by the recurrence $X_{n+1} = (aX_n + c) \% m$ for chosen constants $a$, $c$, and $m$.
- Here $X_n$ is the current value and $X_{n+1}$ is the next pseudorandom number, so the whole sequence is determined by the parameters and the initial seed $X_0$.
- Different libraries and systems use different parameter sets, and some widely used sets are known but not necessarily high quality, so care is needed when choosing them.

---

## Problems with `rand()`

- `rand()` offers no control over which algorithm or parameters are used, so its quality and behaviour vary across compilers and platforms.
- It is not thread-safe because all threads share a single global generator, and its implementation details make it hard to reproduce results reliably across different systems.
- Seeding with `time(0)` is weak because it changes only once per second, so two runs started within the same second can produce identical sequences.

---

## `<random>` generators

- The C++ `<random>` header provides a modern framework for random number generation with explicit **engine** types and **distribution** types.
- You can create multiple independent generators, choose algorithms such as LCGs, Mersenne Twister, or subtract-with-carry, and configure their parameters.
- This approach gives better control over seeding, reproducibility, and statistical properties than using `rand()`.

---

## Mersenne Twister and other engines

- `<random>` includes standard Mersenne Twister engines: `std::mt19937` for 32-bit output and `std::mt19937_64` for 64-bit output, both widely used for general-purpose simulations.
- Other engine types such as linear congruential and subtract-with-carry are also available, letting you choose the trade-off between speed, memory, and quality.
- If an engine is default-constructed without a seed, it will produce the same deterministic sequence every time, which can be useful for reproducible tests.

---

## Seeding with `std::random_device`

- `std::random_device` is a source of entropy provided by the system, often backed by a cryptographically secure generator or hardware randomness.
- A typical pattern is to create `std::random_device rd;` and then seed a generator like `std::mt19937 gen(rd());` so each run starts from a more unpredictable state.
- On many systems this yields sequences that are much harder to predict than those seeded using the system clock.

---

## Distributions in `<random>`

- Distributions separate the **shape of values** from the underlying engine, allowing the same generator to be used with different statistical distributions.
- `std::uniform_int_distribution<int>` can generate integers in a closed interval such as 1 to 6, ideal for modelling dice rolls or similar discrete uniform events.
- `std::uniform_real_distribution<float>` produces floating-point values in a continuous interval, for example between 1 and 6, when non-integer values are needed.

---

## Normal and custom distributions

- `std::normal_distribution<double>` models a Gaussian (bell-curve) distribution, and can be configured with a mean and standard deviation, such as 172 and 6 for human heights.
- `std::discrete_distribution<>` uses a list of weights to set different probabilities for each outcome, making it easy to model “biased” events such as a loaded die where 6 appears half the time.
- These tools allow fine-grained control over probabilities and are useful when generating test data, simulations, or probabilistic behaviour in applications.

---

## Summary

- Pseudorandom numbers are deterministic but designed to mimic randomness, with quality depending heavily on the generator and seeding strategy.
- The C-style `rand()` function is limited and outdated, while C++ `<random>` provides configurable engines, robust seeding, and rich distributions for modern applications.

