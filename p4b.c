// To implement stacks using linked list.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *TOP = NULL;

void insertQ(int n)
{
    struct Node *new = malloc(sizeof(struct Node));
    new->data = n;
    new->next = NULL;

    if (TOP == NULL)
        TOP = new;
    else
    {
        new -> next = TOP;
		TOP = new;
    }
}

void removeQ()
{
    struct Node *temp;

    if (TOP == NULL)
        printf("UNDERFLOW\n");
    else
    {
        temp = TOP;
        TOP = TOP->next;
        free(temp);
    }
}

void printQ()
{
    struct Node *temp = TOP;

    if (temp == NULL)
        printf("LIST EMPTY");
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

void main()
{
    printQ();
    insertQ(1);
    printQ();
    insertQ(2);
    insertQ(3);
    printQ();
    insertQ(4);
    printQ();
    removeQ();
    printQ();
    removeQ();
    removeQ();
    removeQ();
    printQ();
}
