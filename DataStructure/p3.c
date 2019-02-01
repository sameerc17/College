// To implement queues using linked list.


#include<stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node*next; 
};

struct node*front=NULL,*rear=NULL;
void ins(int x)
{
    if(front==NULL)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        front=temp;
        rear=temp;
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        rear->next=temp;
        rear=temp;
    }
}

void del()
{
    if(front==rear)
    {
        free(front);
        front=NULL;
        rear=NULL;
    }
    else if(front==NULL)
    {
        printf("Empty Queue");
    }
    else
    {
        struct node*temp=front;
        front=front->next;
        free(temp);
    }
}

void sho()
{
    struct node*temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    ins(1);
    ins(2);
    ins(3);
    ins(4);
    sho();
    printf("\n");
    del();
    sho();
    printf("\n");
    del();
    sho();
    printf("\n");
    return 0;
}
