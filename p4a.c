// To implement stacks using array.


#include <stdio.h>
int A[100], TOP = -1;
void insertStack(int n)
{
    if (TOP == -1)
    {
        TOP = 0;
        A[TOP] = n;
    }
    else if (TOP == 99)
        printf("OVERFLOW\n");
    else
    {
        TOP++;
        A[TOP] = n;
    }
}

void removeStack()
{
    if (TOP == -1)
        printf("UNDERFLOW\n");
    else
        TOP--;
}

void printStack()
{
    int i;
    if (TOP == -1)
        printf("STACK EMPTY");
    else
    {
        for(i=0; i<=TOP; i++)
            printf("%d ", A[i]);
    }
    printf("\n");
}

void main()
{
    printStack();
    insertStack(10);
    printStack();
    insertStack(20);
    insertStack(30);
    printStack();
    insertStack(40);
    printStack();
    removeStack();
    printStack();
    removeStack();
    removeStack();
    removeStack();
    printStack();
}

