# Complexity Analysis

## 1. Max Heap

### Insertion

When a new score is inserted into a Max Heap, it is initially placed at the end of the heap. It may move upward to maintain the Max Heap property.

- Best case: O(1)
- Worst case: O(log n)
- Average case: O(log n)

### Finding the Maximum

In a Max Heap, the maximum element is always stored at the root.

- Time Complexity: O(1)

Only the root element needs to be accessed.

### Building the Heap

In this program, the heap is constructed by inserting each score one by one.

- Time Complexity: O(n log n)

### Space Complexity

The heap stores all n scores.

- Space Complexity: O(n)

---

## 2. Linear Search

Linear Search checks each score one by one and keeps track of the largest score found.

### Finding the Maximum

For n scores, up to n - 1 comparisons are required.

- Best case: O(n)
- Average case: O(n)
- Worst case: O(n)

Therefore:

- Time Complexity: O(n)

### Space Complexity

Only a variable is required to store the current maximum.

- Auxiliary Space Complexity: O(1)

The input array itself requires O(n) space for storing the scores.

---

## 3. Complexity Comparison

| Operation | Max Heap | Linear Search |
|-----------|----------|---------------|
| Find Maximum | O(1) | O(n) |
| Insert New Score | O(log n) | O(1)* |
| Build/Prepare | O(n log n) using repeated insertion | No separate preparation |
| Space | O(n) | O(n) for input storage |

*For Linear Search, inserting a new score at the end of an ordinary array is O(1). However, finding the maximum after insertion requires O(n).

---

## 4. Given Input

The input contains 8 student scores:

78, 92, 65, 88, 95, 72, 84, 90

For Linear Search:

Number of comparisons = 8 - 1 = 7

For Max Heap construction using repeated insertion:

Parent comparisons = 12

Swaps = 7

Maximum retrieval from Max Heap requires only root access.

---

## 5. Summary

Max Heap provides O(1) maximum retrieval and O(log n) insertion.

Linear Search requires O(n) time every time the maximum has to be found.

Therefore, when new student scores are continuously added and the highest score must be retrieved repeatedly, Max Heap provides a suitable data structure for maintaining the maximum efficiently.
