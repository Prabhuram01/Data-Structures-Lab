// You have an empty sequence, and you will be given
// queries. Each query is one of these three types:
// 1 x  -Push the element x into the stack.
// 2    -Delete the element present at the top of the stack.
// 3    -Print the maximum element in the stack.
// Function Description
// Complete the getMax function in the editor below.
// getMax has the following parameters:
// - string operations[n]: operations as strings
// Returns
// - int[]: the answers to each type 3 query
// Input Format
// The first line of input contains an integer,  The next lines each contain an above mentioned query.
// Constraints
// All queries are valid.
// Sample Input
// STDIN   Function
// -----   --------
// 10      operations[] size n = 10
// 1 97    operations = ['1 97', '2', '1 20', ....]
// 2
// 1 20
// 2
// 1 26
// 1 20
// 2
// 3
// 1 91
// 3
// Sample Output
// 26
// 91
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
int getMax(){
    int max=0;
    if(tos==0)
    printf("Stack is Empty\n");
    else{
    for(int i=0;i<=tos-1;i++)
    if(a[i]>max)
        max=a[i];
    printf("Max Element:\n");
    printf("%d ",max);
}}
int main(){
int m,a;
while(1){
printf("\nMENU\n1:Push   2:Pop   3:Max Element   4:Exit\n");
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
    getMax();
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
// 1:Push   2:Pop   3:Max Element   4:Exit
// 1
// Enter a number to push:
// 11

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 1
// Enter a number to push:
// 16

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 3
// Max Element:
// 16 
// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 2
// Element Popped is 16

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 3
// Max Element:
// 11
// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 4
// Exiting Program...

// Output 2:
// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 1
// Enter a number to push:
// 12

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 2
// Element Popped is 12

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 3
// Stack is Empty

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 1
// Enter a number to push:
// 12

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 2
// Element Popped is 12

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 2
// Stack Empty

// MENU
// 1:Push   2:Pop   3:Max Element   4:Exit
// 4
// Exiting Program...
