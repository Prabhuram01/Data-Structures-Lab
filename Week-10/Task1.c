// Design and Implement a program to create a doubly linked list. Use the following pseudocode. Justify your solution with all the possible test cases. 

// Program(C):

#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
} *new, *head,*p,*temp;
void insert (int x)
{
  new = (struct node *) malloc (sizeof (struct node));
  new->data = x;
  new->next = NULL;
  if (head == NULL){
    head = new;
    temp=new;}
  else
    {
      new->prev = head;
      head->next = new;
      head=head->next;
    }
}
void display(){
    p=temp;
       if(p == NULL)  
    printf("Linked List is empty\n");
    else{  
    printf("Linked List Elements:");
    while(p!=NULL){
    printf(" %d",p->data);
    p=p->next;
    }
    printf("\n");
}
}
int main(){
    int element;
    char choice;
    do{
    printf("Enter element to insert");
        scanf("%d",&element);
        insert(element);
        display();
    printf("do you need one more term(Y/N)");
    scanf("%s",&choice);
    }
    while(choice=='Y');
    return 0;
}

// Output 1:
// Enter element to insert1
// Stack Elements: 1
// do you need one more term(Y/N)Y
// Enter element to insert12
// Stack Elements: 1 12
// do you need one more term(Y/N)N

// Output 2:
// Enter element to insert11
// Linked List Elements: 11
// do you need one more term(Y/N)Y
// Enter element to insert12
// Linked List Elements: 11 12
// do you need one more term(Y/N)Y
// Enter element to insert13
// Linked List Elements: 11 12 13
// do you need one more term(Y/N)Y
// Enter element to insert14
// Linked List Elements: 11 12 13 14
// do you need one more term(Y/N)N
