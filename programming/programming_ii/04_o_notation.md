# INTRODUCTION TO O-NOTATION
28-10-25

---

## Contents

---

## Runtimes
- Consider the "form" of a simple computer program:
```cpp
    int main()
    {
        // Variable declarations, setup, int this, double that, etc.   <- These bits only happen once.
        for (each_data_item)
        {
            // Process data or look for something   <- These bits always happen n times (where n is the number of data items)
            if (condition = true)
            {
                // Do this
            }
            else                // <- One of these always happens n times
            {
                // Do this
            }

            // Maybe a nested for (...)   <- Things in here might happen more than n times (n^2 or n^3 perhaps)
        }
    }
```
- The runtime of ourn program depends on:
1. **The number of data items to be processed:**
    - In the previous example, the more items there are, the longer the program loops.
    - Runtimes must be expressed as a function of the input size (usually denoted by *n*)
2. **The values of the data themselves:**
    - Note that some sections of code only execute when data items meet certain conditions
    - Also we may terminate early if we've found the answer without processing all the data
    - Consequently, we tend to analyse the *worst case* runtime for any *n* data items

- Therefore, the worst case runtime of the above program might be something like ```34 + 12n + 23n^2``` (measured in clock cycles)

---

## Asymptotic Notation
- It should be clear that trying to express runtimes in terms of an exact number of clock cycles is unwieldy:
    - It gives us some potentially very nasty forumulae for runtimes
    - It's architecture dependent (more importantly)
- So instead, we try to find a shorthand measure of runtime, whereby we place an *upper bound* on the runtime as the input size grows very large (or *tends to infinity* to use the mathematical expression)
- For example, considering ```34 + 12n + 23n^2```, the first two terms become negligibly small compared to 23*n*^2 as *n* becomes very large.

---

## O-Notation
- To enable a more effective and concise way to compare and discuss runtimes, we use the following intuition:
    - A function *f(n)* is said to be *order of g(n)* or *O(g(n))* if for all values of *n* greater than *c, f(n) < k * g(n)*
    ![o-notation](programming/programming_ii/img/o-notation.png)
        - *c* and *k* are constants.
- So given our previous example, the worst case runtime ```34 + 12n + 23n^2``` can be called *O(n^2)*, since above a large enough value of *n*, *24n^2* is always greater
- Informally, we just pick the term which grows fastest relative to *n*, as this will always become dominant when *n* gets large enough.

---

## Time Complexities
![time complexities](programming/programming_ii/img/time-complexities.png)