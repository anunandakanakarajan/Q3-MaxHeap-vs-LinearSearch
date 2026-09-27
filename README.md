# Q3 - Max Heap vs Linear Search

## Objective

To identify the highest student score using a Max Heap and Linear Search, execute both methods in C, and compare their performance.

## Input Data

The student scores are:

78, 92, 65, 88, 95, 72, 84, 90

## Problem

A university wants to identify the highest student score from the given data.

The following approaches are implemented and compared:

1. Max Heap
2. Linear Search

## Max Heap

All the scores are inserted into a Max Heap.

Final Max Heap:

[95, 92, 84, 90, 88, 65, 72, 78]

The maximum score is stored at the root.

Highest Score = 95

## Linear Search

The scores are scanned one by one and the maximum value is updated whenever a larger score is found.

Highest Score = 95

Number of comparisons = 7

## Max Heap Insertion

The heap arrangements after each insertion are:

| Insertion | Heap Arrangement |
|-----------|------------------|
| 78 | [78] |
| 92 | [92, 78] |
| 65 | [92, 78, 65] |
| 88 | [92, 88, 65, 78] |
| 95 | [95, 92, 65, 78, 88] |
| 72 | [95, 92, 72, 78, 88, 65] |
| 84 | [95, 92, 84, 78, 88, 65, 72] |
| 90 | [95, 92, 84, 90, 88, 65, 72, 78] |

## Complexity Analysis

### Max Heap

- Insertion: O(log n)
- Finding maximum: O(1)
- Building heap using repeated insertion: O(n log n)
- Space complexity: O(n)

### Linear Search

- Finding maximum: O(n)
- Auxiliary space: O(1)

## Performance Comparison

| Operation | Max Heap | Linear Search |
|-----------|----------|---------------|
| Find maximum | O(1) | O(n) |
| Insert new score | O(log n) | O(1)* |
| Repeated maximum queries | O(1) each | O(n) each |
| Space | O(n) | O(n) |

*Linear Search uses an ordinary array, so appending a new score at the end is O(1).

## Execution Result

For the given input:

- Highest score using Max Heap = 95
- Highest score using Linear Search = 95
- Linear Search comparisons = 7
- Max Heap construction comparisons = 12
- Max Heap swaps = 7

## Conclusion

Both methods correctly identify 95 as the highest score.

Linear Search is simple and suitable for a single maximum search on a small static dataset.

Max Heap provides O(1) maximum retrieval and O(log n) insertion. Therefore, when new scores are continuously added and the highest score needs to be obtained repeatedly, Max Heap is more suitable.

## Files

- max_heap_vs_linear_search.c - C source code
- input.txt - Input data
- output.txt - Program execution output
- complexity_analysis.md - Complexity analysis
- comparison_table.md - Performance comparison
- final_conclusion.md - Final conclusion
