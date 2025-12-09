# SORTING ALGORITHMS
N-D

---

## Contents

- Introduction to Sorting
- Selection Sort
- Insertion Sort
- Bubble Sort
- Merge Sort
- Quicksort
- Radix Sort
- Summary

---

## Introduction to Sorting

- A **sorting algorithm** rearranges items in a list so they appear in a defined order, usually ascending or descending.
- Sorting is a core operation in computer science because it simplifies searching, grouping, and many other algorithms built on ordered data.

---

## Selection Sort

- Selection sort repeatedly **finds the minimum element** from the unsorted part of the array and places it at the next position in the sorted part.
- After $i$ iterations, the first $i$ positions contain their final sorted values because each step fixes exactly one element.
- Finding the minimum in the remaining unsorted elements takes $O(n)$ time and this is done $n$ times, giving an overall time complexity of $O(n^2)$.

---

## Insertion Sort

- Insertion sort builds the sorted list one element at a time by **inserting each new value into its correct position** among the already sorted items.
- Conceptually, it takes the first value, places it at the front, then takes each subsequent value and shifts elements until it is in the right place.
- In the worst and average cases, it may scan through up to $O(n)$ elements for each of the $n$ insertions, leading to $O(n^2)$ time complexity.

---

## Bubble Sort

- Bubble sort repeatedly scans the array and **swaps adjacent elements** if they are in the wrong order.
- Multiple passes are needed: the algorithm keeps going through the list until a pass completes with no swaps needed.
- In the worst case it may need $n$ full passes over $n$ elements, so the time complexity is $O(n^2)$.

---

## Merge Sort

- Merge sort is a **divide-and-conquer** algorithm that splits the array into halves until each subarray has one element, then merges them back in sorted order.
- The key operation is merging two sorted arrays into a single sorted array, which can be done efficiently by repeatedly taking the smallest remaining element from the fronts.
- Splitting creates $\log n$ levels of recursion, and each level processes all $n$ elements during merging, so the overall time complexity is $O(n \log n)$.

---

## Merge Sort Example

- A list such as $2, 6, 1, 9, 7, 3$ is first divided into halves, then into smaller sublists until only single-element lists remain.
- These single-element lists are then merged pairwise in sorted order, repeatedly, until the full list is reconstructed in sorted form.

---

## Quicksort

- Quicksort chooses a **pivot** element and partitions the array so that items less than the pivot go to its left and items greater go to its right.
- The algorithm then recursively quicksorts the left and right partitions, so that the whole array becomes sorted when the recursion finishes.
- With a good pivot choice, the average time complexity is $O(n \log n)$, but in the worst case (e.g. very unbalanced partitions) it degrades to $O(n^2)$.

---

## Radix Sort

- Radix sort processes **integer keys digit by digit**, placing elements into buckets according to the current digit and then collecting them back in order.
- Starting with the least significant digit, it repeats the bucket-and-collect process for each more significant digit until all have been processed.
- For fixed-length integers, this runs in $O(n)$ time because each element is inspected a constant number of times, which is asymptotically optimal for sorting.

---

## Radix Sort Example

- For numbers like 123, 456, 742, 924, 21, 1935, radix sort first groups and reorders them based on one digit (such as the least significant).
- Subsequent passes use more significant digits, and after the final pass the list is fully sorted in ascending order.

---

## Summary

- Simple comparison-based sorts such as **selection**, **insertion**, and **bubble sort** all have $O(n^2)$ time complexity and are mainly useful for small inputs or teaching.
- **Merge sort** and **quicksort** achieve $O(n \log n)$ time on typical data, making them much more suitable for large datasets.
- **Radix sort** can achieve $O(n)$ time for fixed-size integer keys by avoiding comparisons and using digit-based bucketing.

