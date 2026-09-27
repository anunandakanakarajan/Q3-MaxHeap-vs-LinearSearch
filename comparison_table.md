# Performance Comparison: Max Heap vs Linear Search

## Comparison Table

| Criteria | Max Heap | Linear Search |
|---|---|---|
| Data Structure | Complete Binary Tree | Array/List |
| Find Maximum | O(1) | O(n) |
| Insert New Score | O(log n) | O(1)* |
| Build/Preparation | O(n log n) using repeated insertion | No separate preparation |
| Space Complexity | O(n) | O(n) for input storage |
| Maximum Retrieval | Root element | Scan all elements |
| Repeated Maximum Queries | O(1) per query | O(n) per query |
| Suitable for Continuous Updates | Yes | Less efficient for repeated maximum queries |

*Appending a new score at the end of an ordinary array is O(1). However, finding the maximum after insertion requires O(n).

## Execution Comparison for Given Input

### Input

78, 92, 65, 88, 95, 72, 84, 90

### Max Heap

- Heap construction comparisons: 12
- Heap construction swaps: 7
- Maximum score: 95
- Maximum retrieval: Root access
- Maximum retrieval complexity: O(1)

### Linear Search

- Comparisons: 7
- Maximum score: 95
- Maximum search complexity: O(n)

## Performance Analysis

For the given small dataset, Linear Search performs only 7 comparisons to find the maximum and is simple to implement.

However, a Max Heap maintains the maximum at the root. Therefore, once the heap has been constructed, retrieving the maximum requires only O(1) time.

When new scores are continuously inserted, Max Heap insertion takes O(log n), while the maximum can still be retrieved in O(1). With Linear Search, each new maximum query requires scanning the scores again in O(n) time.

Therefore, the choice depends on the workload. For a single search in a small static dataset, Linear Search requires no heap construction. For continuous score updates with frequent maximum queries, Max Heap provides efficient maximum retrieval.
