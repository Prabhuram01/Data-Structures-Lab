// In the classroom we have discussed the algorithms for different traversal techniques like (i) Inorder (ii) preorder and (iii) postorder. Based on the same discussion, implement a solution. Use the following LOC and complete the implementation part. Also run all the possible test cases.

// Program(C):

#include<stdio.h>
#include<stdlib.h>
struct node 
{
  
int num;
   
struct node *left;
   
struct node *right;
 
};
struct node *create () 
{
  
struct node *temp;
  
temp = (struct node *) malloc (sizeof (struct node));
  
temp->left = NULL;
  
temp->right = NULL;
  
printf ("Enter value:");
  
scanf ("%d", &temp->num);
  
return temp;

}

void inorder (struct node *T) 
{
  
if (T != NULL)
    
    {
      
inorder (T->left);
printf("%d",T->num);
 
inorder (T->right);
    
}

}
void preorder (struct node *T) 
{

if (T != NULL)
    
    {
      
printf("%d", T->num);
preorder (T->left);
      
preorder (T->right);
      
    }
} 
void postorder (struct node *T) 
{
  
if (T != NULL)
    
    {
      
postorder (T->left);
      
postorder (T->right);
      
printf("%d", T->num);
    }

}
void main() 
{
  
struct node *v1, *v2, *v3, *v4, *v5, *v6, *v7;
  
v1 = create();
v2 = create();
v3 = create();
v4 = create();
v5 = create();
v6 = create();
v7 = create();

  
v1->left = v2;
  
v1->right = v3;
  
v2->left = v4;
  
v2->right = v5;
  
v3->left = v6;
  
v3->right = v7;
  
printf ("\nInorder:");
  
inorder (v1);
  
printf ("\nPreorder:");
  
preorder (v1);
  
printf ("\nPostorder:");
  
postorder (v1);
  

} 

// Output 1:
// Enter value:1
// Enter value:2
// Enter value:3
// Enter value:4
// Enter value:5
// Enter value:6
// Enter value:7

// Inorder:4251637
// Preorder:1245367
// Postorder:4526731

// Output 2:
// Enter value:2
// Enter value:3
// Enter value:1
// Enter value:4
// Enter value:5
// Enter value:6
// Enter value:7

// Inorder:4352617
// Preorder:2345167
// Postorder:4536712
