// AVL tree is a descendant of Binary Search Tree but overcomes its drawback of increasing complexity if the elements are sorted. It monitors the balance factor of the tree to be 0 or 1 or -1. In case the tree becomes unbalanced, corresponding rotation techniques are performed to balance the tree. Implement insert operation for the creation of nodes in AVL tree. Check the balance factor. If not satisfied, apply rotations.
// 1. Left Rotation: If the addition of a node to the tree’s right makes it imbalance then, in that case, Left Rotation needs to be performed.
// 2. Right Rotation: If the addition of a node to the left of the tree makes the node imbalance then Right Rotation needs to be performed. In other words, When the number of nodes increases on the left side, then there emerges a need to shift the elements to the right side to balance it thus it is said to be Right Rotation.
// 3. Left-Right Rotation: This type of rotation is a combination of the above 2 rotations explained. This type of rotation occurs when one element is added to the right subtree of a left tree.
// In such a case first, perform left rotation on the subtree followed by a right rotation of the left tree.
// 4. Right-Left Rotation: This type of rotation is also composed of a sequence of above 2 rotations. This type of rotation is needed when an element is added to the left of the right subtree, and the tree becomes imbalanced. In such a case, we first perform right rotation on the right subtree and then left rotation on the right tree.
// Justify the program with different test cases.

// Program(C):

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};
int max(int a, int b);
int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
struct Node *newNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return (node);
}
struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}
int getBalance(struct Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}
struct Node *insert(struct Node *node, int key)
{
    /* 1. Perform the normal BST insertion */
    if (node == NULL)
        return (newNode(key));

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else // Equal keys are not allowed in BST
        return node;
    /* 2. Update height of this ancestor node */
    node->height = 1 + max(height(node->left), height(node->right));
    int balance = getBalance(node);
    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    struct Node *root = NULL;
    int ch, x;
    do
    {

        printf("enter your node");
        scanf("%d", &x);
        root = insert(root, x);

        printf("would like to enter another node 1/0:");
        scanf("%d", &ch);
    } while (ch == 1);
    printf("Preorder traversal of the constructed AVL tree is \n");
    preOrder(root);
    return 0;
}
// Output :
// enter your node 5
// would like to enter another node 1/0:1
// enter your node 3
// would like to enter another node 1/0:1
// enter your node 2
// would like to enter another node 1/0:1
// enter your node 6
// would like to enter another node 1/0:0
// Preorder traversal of the constructed AVL tree is
// 3 2 5 6
