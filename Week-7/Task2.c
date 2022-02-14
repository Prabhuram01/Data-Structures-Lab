// We have discussed linked list operations called insert() and delete() in the class. Also illustrated with examples. Design and implement a menu driven C program with 4 operations. (1) Add element to list (2) Delete element from list (3) Traverse elements and (4) Exit. Write all possible examples supported by relevant test cases. 

// Program(C):
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*new,*tos,*p,*temp;
void push(int val){
    new=(struct node *)malloc(sizeof(struct node));
    new->data=val;
    new->next=NULL;
    if(tos==NULL)
    tos=new;
    else{
        new->next=tos;
        tos=new;
    }
}
void pop(){
    if(tos==NULL)
    printf("Linked list Empty");
    else{
    temp=tos;
    printf("Deleted element is %d",tos->data);
    tos=tos->next;
    free(temp);
}}
void display(){
    p=tos;
    if(tos == NULL)  
    printf("Linked list is empty\n");
    else{  
    printf("Linked list Elements:");
    while(p!=NULL){
    printf(" %d",p->data);
    p=p->next;
    }
}}
int main(){
int m,a;
while(1){
printf("\nMENU\n1:Push   2:Pop   3:Display   4:Exit\n");
scanf("%d",&m);
switch(m){
    case 1:
    printf("Enter a number to push:\n");
    scanf("%d",&a);
    push(a);
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    case 4:
    printf("Exiting Program...");    
    exit(0);
    break;
}}
return 0;
}

// Output 1:
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 12

// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 123

// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 123

// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 2
// Deleted element is 123
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 3
// Linked list Elements: 123 12
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 4
// Exiting Program...

// Output 2:
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 2
// Linked list Empty
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 3
// Linked list is empty

// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 123

// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 123

// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 2
// Deleted element is 123
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 4
// Exiting Program...
