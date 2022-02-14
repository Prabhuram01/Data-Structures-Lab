// We have discussed stack operations called push () and pop () in the class. Also illustrated with examples. Design and implement a menu driven C program with 4 operations. (1) Add element to stack (2) Delete element from stack (3) Traverse elements and (4) Exit. Write all possible examples supported by relevant test cases.   
// Sample test case is as below:

// Program(C):
#include <stdio.h>
#include<stdlib.h>
int tos=0;
int max_size=6;
int a[100];
void push(int y){
    if(tos>=max_size)
    printf("Stack Overflow\n");
    else{        
        a[tos]=y;
        tos++;
    }
}
void pop(){
    if(tos<=0)
    printf("Stack Empty\n");
    else{
        printf("Element Popped is %d\n",a[tos-1]);
        a[tos-1]=0;
        tos--;
    }
}
int display(){
    if(tos==0)
    printf("Stack is Empty\n");
    else{
    printf("Elements of stack are:\n");
    for(int i=0;i<=tos-1;i++)
    printf("%d ",a[i]);
    printf("\n");
}}
int main(){
int m,a;
while(1){
printf("MENU\n1:Push   2:Pop   3:Display   4:Exit\n");
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
// 2
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 3
// Elements of stack are:
// 2 
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 4
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 3
// Elements of stack are:
// 2 4 
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 2
// Element Popped is 4
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 4 3
// Elements of stack are:
// 2 
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 4
// Exiting Program...
// Output 2:
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 2
// Stack Empty
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 1
// Enter a number to push:
// 5
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 2
// Element Popped is 5
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 3
// Elements of stack are:
// Stack is Empty
// MENU
// 1:Push   2:Pop   3:Display   4:Exit
// 4
// Exiting Program…
