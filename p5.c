// To implement priority queues using heap.

#include <stdio.h>
int A[100], heapSize = 0;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;

    if (l <= heapSize && A[l] > A[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= heapSize && A[r] > A[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        heapify(largest);
    }
}

void build_heap()
{
    for (int i = heapSize / 2; i >= 0; i--)
        heapify(i);
}

void insertEle(int n)
{
    A[heapSize] = n;
    heapSize++;
    build_heap(0);
}

void removeEle()
{
    swap(&A[0], &A[heapSize - 1]);
    heapSize--;
    build_heap(0);
}

int extract_maximum()
{
    int max = A[0];
    A[0] = A[heapSize - 1];
    heapSize--;
    build_heap(0);
    return max;
}

void printQ()
{
    int i;
    for (i = 0; i < heapSize; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    insertEle(9);
    insertEle(6);
    insertEle(10);
    insertEle(7);
    insertEle(8);
    insertEle(3);
    insertEle(5);
    printQ();
    printf("%d\n", extract_maximum());
    printQ();
    printf("%d\n", extract_maximum());
    printQ();
    return 0;
}