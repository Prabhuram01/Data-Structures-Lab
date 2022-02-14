// A polynomial p(x) is the expression in variable x which is in the form (axn + bxn-1 + …. + jx+ k), where a, b, c …., k fall in the category of real numbers and 'n' is non negative integer, which is called the degree of polynomial. Create a function that takes two sorted linked lists and merges them into a single sorted linked list. Your goal is to return a new linked list that contains the nodes from two lists in sorted order. You may assume the sort order is ascending. For example:
// // list1
// 1 -> 4 -> 10 -> 11

// // list2
// -1 -> 2 -> 3 -> 6

// // merged list
// -1 -> 1 -> 2 -> 3 -> 4 -> 6 -> 10 -> 11

// Program(C):

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void printList(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void push(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void moveNode(struct Node **destRef, struct Node **sourceRef)
{
    if (*sourceRef == NULL)
    {
        return;
    }
    struct Node *newNode = *sourceRef;
    *sourceRef = (*sourceRef)->next;
    newNode->next = *destRef;
    *destRef = newNode;
}
struct Node *sortedMerge(struct Node *a, struct Node *b)
{
    struct Node *result = NULL;
    struct Node **lastPtrRef = &result;
    while (1)
    {
        if (a == NULL)
        {
            *lastPtrRef = b;
            break;
        }
        else if (b == NULL)
        {
            *lastPtrRef = a;
            break;
        }
        if (a->data <= b->data)
        {
            moveNode(lastPtrRef, &a);
        }
        else
        {
            moveNode(lastPtrRef, &b);
        }
        lastPtrRef = &((*lastPtrRef)->next);
    }
    return result;
}
int main(void)
{
    int keys[] = {1, 4, 10, 11};
    int keys1[] = {-1, 2, 3, 6};
    int n = sizeof(keys) / sizeof(keys[0]);
    int n1 = sizeof(keys1) / sizeof(keys1[0]);
    struct Node *a = NULL, *b = NULL;
    for (int i = n - 1; i >= 0; i--)
    {
        push(&a, keys[i]);
    }
    for (int j = n1 - 1; j >= 0; j--)
    {
        push(&b, keys1[j]);
    }
    printf("First List: ");
    printList(a);
    printf("Second List: ");
    printList(b);
    struct Node *head = sortedMerge(a, b);
    printf("After Merge: ");
    printList(head);
    return 0;
}
