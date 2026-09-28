
# DSA Assignment: Max Heap and Linear Search in C

## Problem Statement
A university wants to identify the highest student score
from the following data:

78, 92, 65, 88, 95, 72, 84, 90

## Objectives
1. Implement a Max Heap in C.
2. Insert all scores and display the heap after each insertion.
3. Find the highest score using Max Heap.
4. Find the highest score using Linear Search.
5. Count comparisons and analyse performance.

## Programming Language
C

## Data Structures
- Max Heap
- Array

## Results
- Highest score: 95
- Max Heap insertion comparisons: 11
- Max Heap maximum access comparisons: 0
- Linear Search comparisons: 7

## Time Complexity

| Operation | Max Heap | Linear Search |
|---|---|---|
| Find maximum | O(1) | O(n) |
| Insert score | O(log n) | O(1) append |
| Find maximum after insertion | O(1) | O(n) |

## Analysis
Max Heap provides constant-time access to the
maximum score and logarithmic-time insertion.
Linear Search requires a scan of all scores to
find the maximum.

## Conclusion
Max Heap is suitable for continuously maintaining
the highest score when new student scores are
frequently added.