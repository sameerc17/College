// To implement binary search trees.


#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
};
struct Node *newNode(int data)
{
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->right = ptr->left = NULL;
    return ptr;
}
void preOrder(struct Node *root)
{
    if (root != NULL)
    {

        preOrder(root->left);
        printf("%d ", root->data);
        preOrder(root->right);
    }
}
struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return newNode(data);
    }

    else
    {
        struct Node *curr;
        if (data > root->data)
        {
            curr = insertNode(root->right, data);
            root->right = curr;
        }
        else
        {
            curr = insertNode(root->left, data);
            root->left = curr;
        }
        return root;
        // root updated, return to reflect changes
    }
}

int searchForNode(struct Node *root, int ele)
{
    int ans = 0;

    if (root == NULL)
        return 0;

    if (root->data == ele)
        return 1;
    else
    {
        if (ele > root->data)
            ans = searchForNode(root->right, ele);
        else
            ans = searchForNode(root->left, ele);
    }

    return ans;
}
struct Node *deleteByMerging(struct Node *node)
{
    struct Node *temp;

    if (node != NULL)
    {
        if (!node->right)
            node = node->left;
        else if (!node->left)
            node = node->right;
        else
        {
            temp = node->left;

            while (temp->right)
                temp = temp->right;

            temp->right = node->right;
            temp = node;
            node = node->left;
        }
        free(temp);
    }
    return node;
}
struct Node *deleteNode(struct Node *root, int ele)
{
    struct Node *ptr = root, *prev = NULL;

    while (ptr != NULL)
    {
        if (ptr->data == ele)
            break;
        prev = ptr;
        if (ele > ptr->data)
            ptr = ptr->right;
        else
            ptr = ptr->left;
    }

    if (ptr != NULL && ptr->data == ele)
    {
        if (ptr == root)
            root = deleteByMerging(root);
        else if (prev->right == ptr)
            prev->right = deleteByMerging(prev->right);
        else
            prev->left = deleteByMerging(prev->left);
    }
    return root;
}

void main()
{
    struct Node *root = NULL;
    int x, ele;

    while (1)
    {
        printf("\n1) Insert  2) Search  3) Delete  4) Exit\n");
        scanf("%d", &x);

        switch (x)
        {
            case 1:
                scanf("%d", &ele);
                root = insertNode(root, ele);

                preOrder(root);
                printf("\n");
                break;

            case 2:
                scanf("%d", &ele);
                printf("ELEMENT %s FOUND\n", searchForNode(root, ele) ? "" : "NOT");
                break;

            case 3:
                scanf("%d", &ele);
                root = deleteNode(root, ele);

                preOrder(root);
                printf("\n");
                break;

            case 4:
                exit(1);

            default:
                printf("Wrong choice\n");
        }
    }
}

