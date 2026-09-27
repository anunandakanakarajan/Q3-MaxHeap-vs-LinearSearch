#include <stdio.h>

#define MAX 100

void printHeap(int heap[], int n)
{
    printf("[");

    for (int i = 0; i < n; i++)
    {
        printf("%d", heap[i]);

        if (i < n - 1)
            printf(", ");
    }

    printf("]\n");
}

void insertMaxHeap(int heap[], int *n, int value,
                   int *comparisons, int *swaps)
{
    int i = *n;

    heap[i] = value;
    (*n)++;

    *comparisons = 0;
    *swaps = 0;

    while (i > 0)
    {
        int parent = (i - 1) / 2;

        (*comparisons)++;

        if (heap[parent] < heap[i])
        {
            int temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;

            (*swaps)++;

            i = parent;
        }
        else
        {
            break;
        }
    }
}

int linearSearchMax(int a[], int n, int *comparisons)
{
    int max = a[0];

    *comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        (*comparisons)++;

        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int scores[MAX];
    int nScores = 0;

    printf("Enter student scores (end with EOF):\n");

    while (nScores < MAX &&
           scanf("%d", &scores[nScores]) == 1)
    {
        nScores++;
    }

    if (nScores == 0)
    {
        printf("No scores entered.\n");
        return 0;
    }

    int heap[MAX];
    int heapSize = 0;

    int totalHeapComparisons = 0;
    int totalHeapSwaps = 0;

    printf("\nMAX HEAP INSERTION\n");
    printf("==================\n");

    for (int i = 0; i < nScores; i++)
    {
        int comparisons;
        int swaps;

        insertMaxHeap(heap, &heapSize, scores[i],
                      &comparisons, &swaps);

        totalHeapComparisons += comparisons;
        totalHeapSwaps += swaps;

        printf("After inserting %d: ",
               scores[i]);

        printHeap(heap, heapSize);

        printf("  Parent comparisons = %d, swaps = %d\n",
               comparisons, swaps);
    }

    printf("\nMAX HEAP RESULT\n");
    printf("================\n");

    printf("Highest score = %d\n", heap[0]);

    printf("Comparisons for finding maximum = "
           "0 (root access)\n");

    printf("Heap construction comparisons = %d\n",
           totalHeapComparisons);

    printf("Heap construction swaps = %d\n",
           totalHeapSwaps);

    printf("Maximum retrieval operations = "
           "1 (root access)\n");

    int linearComparisons;

    int linearMax = linearSearchMax(
        scores, nScores, &linearComparisons
    );

    printf("\nLINEAR SEARCH RESULT\n");
    printf("====================\n");

    printf("Highest score = %d\n", linearMax);

    printf("Comparisons = %d\n",
           linearComparisons);

    printf("\nCOMPARISON SUMMARY\n");
    printf("==================\n");

    printf("Max Heap: maximum retrieval O(1), "
           "insertion O(log n)\n");

    printf("Linear Search: maximum search O(n)\n");

    printf("For %d scores: Max Heap build comparisons = %d; "
           "Linear Search comparisons = %d\n",
           nScores,
           totalHeapComparisons,
           linearComparisons);

    return 0;
}
