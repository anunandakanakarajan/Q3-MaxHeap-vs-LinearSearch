# Final Conclusion

The given student scores are:

78, 92, 65, 88, 95, 72, 84, 90

Two approaches were implemented in C to find the highest score:

1. Max Heap
2. Linear Search

Both methods correctly identified the highest student score as:

**95**

## Execution Results

For the given input:

- Max Heap construction comparisons = 12
- Max Heap construction swaps = 7
- Maximum retrieval from Max Heap = O(1)
- Linear Search comparisons = 7

## Comparison

Linear Search is simple and does not require a separate data structure. For a single maximum search on a small and static dataset, it is straightforward and requires O(n) time.

A Max Heap requires O(log n) time for inserting a new score, but the maximum element is always available at the root and can be retrieved in O(1) time.

## Final Analysis

When the number of students increases and new scores are continuously added, repeatedly finding the maximum using Linear Search requires O(n) time for every search.

In contrast, a Max Heap maintains the maximum at the root. New scores can be inserted in O(log n) time and the current maximum can be retrieved in O(1) time.

Therefore, for a system that continuously receives student scores and frequently needs to know the highest score, a Max Heap is a suitable data structure because it efficiently maintains and retrieves the maximum value.

For a single search on a small static dataset, Linear Search remains a simple approach.
