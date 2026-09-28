
#include <stdio.h>

#define MAX 100

// Insert a score into the Max Heap
void insertMaxHeap(int heap[], int *size, int score,
                   int *comparisons)
{
    int i, parent, temp;

    // Insert the score at the end
    i = *size;
    heap[i] = score;
    (*size)++;

    // Move the score upward if necessary
    while (i > 0)
    {
        parent = (i - 1) / 2;
        (*comparisons)++;

        if (heap[i] > heap[parent])
        {
            // Swap child and parent
            temp = heap[i];
            heap[i] = heap[parent];
            heap[parent] = temp;

            i = parent;
        }
        else
        {
            break;
        }
    }
}

// Display the Max Heap
void displayHeap(int heap[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

// Find the maximum using Linear Search
int linearSearchMax(int scores[], int n, int *comparisons)
{
    int maxScore = scores[0];
    int i;

    for (i = 1; i < n; i++)
    {
        (*comparisons)++;

        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
        }
    }

    return maxScore;
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = 8;
    int heap[MAX];
    int size = 0;
    int heapComparisons = 0;
    int linearComparisons = 0;
    int i, maxScore;

    // Part A: Insert scores into Max Heap
    printf("MAX HEAP INSERTION\n");

    for (i = 0; i < n; i++)
    {
        printf("\nInserting: %d\n", scores[i]);

        insertMaxHeap(heap, &size, scores[i],
                      &heapComparisons);

        printf("Heap: ");
        displayHeap(heap, size);
    }

    // Part B: Find maximum using Max Heap
    printf("\nMAXIMUM USING MAX HEAP\n");
    printf("Highest score: %d\n", heap[0]);
    printf("Insertion comparisons: %d\n",
           heapComparisons);
    printf("Comparisons to access maximum: 0\n");

    // Part B: Find maximum using Linear Search
    printf("\nMAXIMUM USING LINEAR SEARCH\n");

    maxScore = linearSearchMax(scores, n,
                               &linearComparisons);

    printf("Highest score: %d\n", maxScore);
    printf("Comparisons: %d\n", linearComparisons);

    return 0;
}