// Design and Implement a program to insert a node in the beginning of the double linked list. Use the following pseudocode. Justify your solution with all the possible test cases. (Use the code designed in task-1 and make extension).

// Program(C):
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * new, *head, *p, *temp;
void insert(int x)
{
    new = (struct node *)malloc(sizeof(struct node));
    new->data = x;
    new->prev = NULL;
    if (head == NULL)
    {
        head = new;
        temp = new;
    }
    else
    {
        new->next = head;
        head->prev = new;
        head = head->prev;
    }
}
void display()
{
    p = temp;
    if (p == NULL)
        printf("Linked List is empty\n");
    else
    {
        printf("Linked List Elements:");
        while (p != NULL)
        {
            printf(" %d", p->data);
            p = p->prev;
        }
        printf("\n");
    }
}
int main()
{
    int element;
    char choice;
    do
    {
        printf("Enter element to insert");
        scanf("%d", &element);
        insert(element);
        display();
        printf("do you need one more term(Y/N)");
        scanf("%s", &choice);
    } while (choice == 'Y');
    return 0;
}
// Output :
// Enter element to insert1
// Linked List Elements: 1
// do you need one more term(Y/N)Y
// Enter element to insert2
// Linked List Elements: 1 2
// do you need one more term(Y/N)Y
// Enter element to insert4
// Linked List Elements: 1 2 4
// do you need one more term(Y/N)Y
// Enter element to insert6
// Linked List Elements: 1 2 4 6
// do you need one more term(Y/N)Y
// Enter element to insert8
// Linked List Elements: 1 2 4 6 8
// do you need one more term(Y/N)N
