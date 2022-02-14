// We have discussed Queue operations called insert() and delete() in the class. Also illustrated with examples. Design and implement a menu driven C program with 4 operations. (1) Add element to Queue (2) Delete element from Queue (3) Traverse elements and (4) Exit. Write all possible examples supported by relevant test cases.
// Use the following Example for Reference

// Program(C):
#include <stdio.h>
#include<stdlib.h>
int rear=-1;
int front=-1;
int max_size=6;
int a[20];
void insert(int x){
if(rear>max_size)
printf("Queue Overflow\n");
else{
    rear++;
    a[rear]=x;
    }
}
void delete(){
    if(rear==front)
    printf("Queue Empty\n");
    else{
        front++;
        printf("Element deleted is %d\n",a[front]);
    }
}
int display(){
    if(rear==front)
    printf("Queue Empty\n");
    else{
    printf("Elements of Queue are:");
    for(int i=front+1;i<=rear;i++)
    printf("%d ",a[i]);
    printf("\n");
}
}
int main()
{
int m,a;
while(1){
printf("MENU\n1:insert   2:delete   3:Display   4:Exit\n");
scanf("%d",&m);
switch(m){
    case 1:
    printf("Enter a number to insert:\n");
    scanf("%d",&a);
    insert(a);
    break;
    case 2:
    delete();
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
// 1:insert   2:delete   3:Display   4:Exit
// 1
// Enter a number to insert:
// 11
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 1
// Enter a number to insert:
// 12
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 3
// Elements of Queue are:11 12 
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 2
// Element deleted is 11
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 3
// Elements of Queue are:12 
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 4
// Exiting Program…
// Output 2:
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 2
// Queue Empty
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 3
// Queue Empty
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 1
// Enter a number to insert:
// 12
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 3
// Elements of Queue are:12
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 2
// Element deleted is 12
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 3
// Queue Empty
// MENU
// 1:insert   2:delete   3:Display   4:Exit
// 4
// Exiting Program…
