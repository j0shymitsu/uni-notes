# THREADS
N-D

---

## Contents
- Introduction to Multithreading
- Simple Thread Example
- Threads with Parameters
- Controlling Threads with boost::this_thread
- Joining Threads
- Shared Data and Data Races
- Mutexes and Critical Sections
- Locks and RAII
- Condition Variables
- Condition Variable Example
- Summary

---

## Introduction to Multithreading
- **Multithreaded programming** uses several threads of execution running in parallel to perform tasks.
- Threads can exploit multiple processor cores or virtual threads, which may speed up computation.
- Separate threads also allow some tasks to execute independently of the main process, improving responsiveness.

---

## Simple Thread Example
- A simple program can have two threads: the main thread and another thread (for example, `myThread`).
- `myThread` runs a function such as `loadsOfAs` and starts as soon as the thread object is constructed.
- The thread constructor accepts any callable object (free function or function object), and the interleaving of output between threads can be surprising.

---

## Threads with Parameters
- To pass data to a new thread, one option is to pass arguments directly to the thread constructor.
- When passing references, helpers such as `boost::ref` are used so the thread receives a reference rather than a copy.
- Another option is to use a function object (functor) whose member variables store the required data for the thread to access.

---

## Controlling Threads with boost::this_thread
- The `boost::this_thread` namespace provides utilities to control the currently running thread from within any function.
- A typical example puts both the main thread and a worker thread to sleep for some duration.
- The **boost::chrono** library is often used alongside to specify sleep times in different units like milliseconds or seconds.

---

## Joining Threads
- The `join()` method blocks until a thread finishes execution, ensuring the main thread waits for worker threads to complete when required.
- `try_join_for()` attempts to wait for a specified duration before giving up, allowing time-limited joins.
- At the time of the slides, `try_join_for()` support was one of the reasons to prefer `boost::thread` over `std::thread` in some situations.

---

## Shared Data and Data Races
- Once more than one thread is running, care is needed to prevent them from interfering destructively with each other.
- If threads access common data, multiple threads must not write to the same location at the same time, or a **data race** occurs.
- Synchronisation mechanisms such as mutexes, condition variables, and atomic types control safe access to shared resources.

---

## Mutexes and Critical Sections
- A **mutex** (MUTual EXclusion) protects sections of code that access shared resources so that only one thread enters at a time.
- When a thread enters a mutex-protected **critical section**, it locks the mutex; when finished, it unlocks it.
- If another thread tries to lock an already locked mutex, it blocks and waits until the mutex is unlocked.

---

## Mutex Example
- In a simple output example, two threads both write to `std::cout`, one with a mutex and one without.
- Without protection, outputs from different threads can interleave in a messy, unpredictable way; with a mutex, only one thread writes at a time.
- The mutex therefore serialises access to `std::cout`, producing clean, non-overlapping lines of output.

---

## Locks and RAII
- Manually locking and unlocking mutexes is error-prone, especially when exceptions or multiple return paths are involved.
- Boost provides RAII-style **lock** objects that automatically lock a mutex on construction and unlock it on destruction, ensuring release even if an exception occurs.
- A very simple lock struct stores a pointer to a `boost::mutex`, locks it in the constructor, and unlocks it in the destructor; Boost offers stronger abstractions like `unique_lock` and `shared_lock`.

---

## unique_lock
- `boost::unique_lock` (and similar types) wrap a mutex and manage locking and unlocking automatically using RAII.
- Using `unique_lock` is generally safer in practice than manually calling `lock()` and `unlock()` on a raw mutex.
- It also supports more advanced operations (deferred locking, timed locking) that make it flexible for complex synchronisation patterns.

---

## Condition Variables
- A **condition variable** provides higher-level synchronisation, letting one thread wait for another to complete some task.
- The waiting thread calls `wait` on the condition variable (while holding a mutex), and another thread calls `notify` when the condition is satisfied.
- Boost condition variables provide `notify_one` to wake a single waiting thread and `notify_all` to wake all waiters; they are always used with a locked mutex.

---

## Condition Variable Example
- In the example, several `printSome` threads wait on a condition variable until they receive a notification.
- The notification is sent by a function `go` after the user presses enter, releasing all waiting threads to proceed.
- As an exercise, the code can be modified so that each thread’s output does not overlap, for example by combining condition variables with mutex-protected printing.

---

## Summary
- Multithreading allows multiple threads of execution, improving performance and responsiveness but introducing concurrency hazards.
- Synchronisation tools such as mutexes, RAII-style locks, and condition variables help prevent data races and coordinate thread behaviour safely.
- Libraries like Boost provide rich threading primitives (threads, joining functions, locks, condition variables) that extend or complement the C++ standard facilities.
