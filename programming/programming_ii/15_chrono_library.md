# CHRONO (C++ LIBRARY)
N-D

---

## Contents
- Introduction to std::chrono
- Durations
- Duration Casts
- General-Purpose Duration Type
- Clocks in chrono
- Timing Code with steady_clock
- boost::chrono and CPU Time
- Boost Clock Types
- Summary

---

## Introduction to std::chrono
- The **std::chrono** library is built around the `duration` data type and provides more flexible, thread-safe and sophisticated time handling than the older `<ctime>` facilities.
- A typical example uses `std::this_thread::sleep_for` with `chrono::seconds` to pause a program for a given time.
- Exercises often include modifying the code so the program sleeps for different intervals such as 3 seconds, 250 milliseconds, or half a minute.

---

## Durations
- In the chrono library, a **duration** is defined by a **representation** and a **time period**.
- The representation is the underlying numeric type used to count how many time periods have elapsed (for example, more bits are needed to count nanoseconds than hours).
- The time period is expressed as a ratio relative to 1 second, e.g. minutes are `<60,1>` and milliseconds are `<1,1000>`.

---

## Duration Helper Types
- Helper typedefs avoid writing ratios explicitly, such as `std::chrono::nanoseconds`, `microseconds`, `milliseconds`, `seconds`, `minutes`, and `hours`.
- These duration aliases standardise common units and make code more readable and less error-prone.

---

## Duration Casts
- **Duration casts** convert from one duration type to another using `std::chrono::duration_cast`.
- For example, given `seconds two_s(2);` you can write `milliseconds ms = duration_cast<milliseconds>(two_s);` and then output `ms.count()` to see the value in milliseconds.
- A typical exercise is to write a program to calculate the number of nanoseconds in 6 minutes using suitable duration types and casts.

---

## General-Purpose Duration Type
- A good all-purpose duration type is `std::chrono::duration<double>`, which stores a length of time as a `double` number of seconds (the default time period).
- This choice usually avoids repeated casting and is adequate unless very high precision or extremely long periods are required.
- C++20 adds extra helper duration types such as days, weeks and years for more expressive time intervals.

---

## Clocks in chrono
- **Clocks** are types that can tell the current time, such as `system_clock`, `steady_clock`, and `high_precision_clock`.
- `system_clock` is the OS “wall clock”, `steady_clock` is a non-decreasing timer unaffected by wall clock changes, and `high_precision_clock` provides the highest precision available on the system.
- A clock consists of a duration type, a `time_point` type, and a `now()` function that returns the current `time_point`.

---

## Time Points and Durations
- The `now()` function of a clock returns a `time_point` representing a point on that clock’s timeline.
- Subtracting one `time_point` from another from the same clock yields a `duration` representing the elapsed time between them.

---

## Timing Code with steady_clock
- To time a section of code, capture the start time using `steady_clock::time_point t = steady_clock::now();`.
- After the code runs, compute `steady_clock::duration elapsed = steady_clock::now() - t;` to obtain the elapsed duration.
- You can then use `duration_cast<nanoseconds>(elapsed).count()` (or other units) to display the elapsed time in a chosen unit such as nanoseconds.

---

## boost::chrono and CPU Time
- `std::chrono` generally measures **real time** from the user or system perspective, which is suitable for timing external events or user interactions.
- For algorithm benchmarking, real elapsed time can be misleading because the OS may schedule other processes while yours waits.
- The Boost library’s **boost::chrono** offers clocks that measure CPU time actually spent executing your process or thread rather than just wall-clock time.

---

## Boost Clock Types
- `process_real_cpu_clock` captures wall-clock CPU time used by the current process.
- `process_user_cpu_clock` measures user-CPU time spent by the process, while `process_system_cpu_clock` measures system-CPU time.
- `process_cpu_clock` is a tuple-like clock that reports real, user, and system CPU times together, and `thread_clock` is a steady clock that gives CPU time spent by the current thread when supported.

---

## Summary
- `std::chrono` provides type-safe durations, time points and clocks that improve on `<ctime>` for handling and measuring time in C++.
- Durations combine a representation and a time period, with helper types, duration casts, and general-purpose types like `duration<double>` to simplify common use cases.
- Clocks such as `system_clock`, `steady_clock` and `high_precision_clock` support tasks from simple sleeps to precise timing, while `boost::chrono` adds CPU-time clocks for accurate performance measurement.
