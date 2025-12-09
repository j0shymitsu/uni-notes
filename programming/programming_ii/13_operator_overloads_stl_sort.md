# STL SORT & OVERLOADING
N-D

---

## Contents

- STL `std::sort` basics
- Using `std::sort` with containers
- Operator overloading for custom types
- Sorting in descending order
- Function objects (functors)
- Parameterised function objects
- Summary

---

## STL `std::sort` basics

- The C++ **STL sort algorithm** provides a highly optimised comparison sort, typically using a tuned quicksort-like or hybrid algorithm depending on the standard library implementation.
- `std::sort` can work with any type that defines a meaningful **less-than operator `<`**, including built-in types like `int`, `double`, and `std::string`.
- Its general form is `void sort(RandomAccessIterator first, RandomAccessIterator last);`, which means it requires **random access iterators** (e.g. arrays, `std::vector`) and cannot be used directly with linked lists.

---

## Using `std::sort` with containers

```
- To use `std::sort`, include the `<algorithm>` header, and typically `<vector>` or other container headers as needed.
```

- For vectors, sorting is done by calling `std::sort(vec.begin(), vec.end());`, which sorts the elements in ascending order using the default `<` comparison.
- Linked lists such as `std::list` provide their own member `sort()` function, so you call `ls.sort();` instead of using `std::sort` because `std::list` does not have random access iterators.

---

## Operator overloading for custom types

- Custom data types can be sorted by **overloading the `<` operator**, defining what it means for one object to be “less than” another.
- For example, a `Height` class with `feet` and `inches` fields can implement `bool operator<(const Height& rhs) const;` so that heights are ordered by their measurements.
- Once `<` is defined correctly, the type can be used with `std::sort` and also with associative containers like `std::map` that rely on ordering.

---

## Sorting in descending order

- `std::sort` can sort in **descending order** by providing a third argument: a comparison object such as `std::greater<int>()`.
- For example, `std::sort(stuff.begin(), stuff.end(), std::greater<int>());` arranges the elements so the largest values come first.

---

## Function objects (functors)

- A **function object** (functor) is a class or struct that overloads `operator()` so that instances can be called like functions.
- `std::greater<int>` is a standard example of a functor used as a custom comparator for sorting.
- Custom functors allow sorting according to arbitrary criteria, as long as they implement a **strict weak ordering** (no cycles like $a < b$, $b < c$, and $c < a$).

---

## Example: custom comparator functor

- A functor such as `ClosestTo5` can define `bool operator()(int i, int j) { return abs(5 - i) < abs(5 - j); }` to sort integers by how close they are to 5.
- Calling `std::sort(stuff.begin(), stuff.end(), ClosestTo5());` then orders the vector so values nearest to 5 appear first.

---

## Parameterised function objects

- A more flexible functor like `ClosestTo` can store a value `cmp` and use a constructor to set it, allowing sorting by closeness to any chosen integer.
- Its call operator can compare `abs(cmp - i)` and `abs(cmp - j)`, and `std::sort(stuff.begin(), stuff.end(), ClosestTo(4));` will sort by distance from 4.
- The same idea can extend to points in 2D space by defining a point class and a functor that compares Euclidean distances from a target coordinate using Pythagoras.

---

## Summary

- `std::sort` is a powerful, generic C++ sort that works with random access containers and any type providing a suitable `<` or comparator.
- Custom **operator overloads** and **function objects** make it possible to sort complex types or apply rich ordering criteria, as long as the comparison defines a strict weak ordering.

