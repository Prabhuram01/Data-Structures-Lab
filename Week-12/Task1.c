//  Design, develop and execute a program in C/Python to implement a Binary Search tree where each node consists of integers. The program should support the following functions and show different test cases.
// a. Create a Binary Search tree
// b. Insert a new node
// c. Delete a node if it is found, otherwise display appropriate message
// d. Display the nodes of Binary Search tree
// e. Validate Binary Search tree

// Program(C):

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

// Inorder Traversal
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
// BST Validation
int isBSTcheck(struct node *root, int min, int max)
{
    if (root == NULL)
        return 1;
    if (root->data <= min || root->data >= max)
        return 0;

    return isBSTcheck(root->left, min, root->data) && isBSTcheck(root->right, root->data, max);
}
int isBST(struct node *root)
{
    return isBSTcheck(root, INT_MIN, INT_MAX);
}

// BST Insertion
struct node *insert(struct node *root, int value)
{
    if (root == NULL)
        return create(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->left, value);
}

// BST Deletion
struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{

    struct node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main()
{
    /*       5
           /   \
          3     6
         / \
        2   4
        */

    struct node *p = create(5);
    struct node *p1 = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(2);
    struct node *p4 = create(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    int option, element;
    printf("1.Insert\n2.Delete\n3.display\n4.Validate\n5.Stop\n");
    while (1)
    {
        printf("enter the option:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            printf("Enter Element to Insert:");
            scanf("%d", &element);
            insert(p, element);
            break;
        }
        case 2:
        {
            printf("Enter Element to Delete:");
            scanf("%d", &element);
            deleteNode(p, element);
            break;
        }
        case 3:
        {
            inorder(p);
            printf("\n");
            break;
        }
        case 4:
        {
            if (isBST(p))
                printf("Yes!It is a BST\n");
            else
                printf("Yes!It is not a BST\n");
            break;
        }
        case 5:
            printf("Exiting Program.....");
            exit(0);
        }
    }
    return 0;
}

// OUtput:
// 1.Insert
// 2.Delete
// 3.display
// 4.Validate
// 5.Stop
// enter the option:1
// Enter Element to Insert:1
// enter the option:3
// 1 2 3 4 5 6
// enter the option:2
// Enter Element to Delete:1
// enter the option:3
// 2 3 4 5 6
// enter the option:2
// Enter Element to Delete:2
// enter the option:3
// 3 4 5 6
// enter the option:4
// Yes!It is a BST
// enter the option:5
// Exiting Program.....
