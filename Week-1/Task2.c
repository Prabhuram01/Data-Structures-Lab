// Suppose you are implementing a Linear search algorithm using any of the languages like C/Python. In the given array if there is a possibility of multiple occurrences of some elements. In such a case how to identify the location of the element. Design and implement the solution for the same.
// Sample input
// Enter number of elements 6
// Enter 6 elements
// 44,16,18,16,47,16
// Enter element to search 16
// Sample output
// 16 is present at location 1
// 16 is present at location 3
// 16 is present at location 5

// Program(C):
#include<stdio.h>
int main(){
int a[100],i,found=0,n,key;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements",n);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
printf("Enter element to search:");
scanf("%d",&key);
for(i=0;i<=n-1;i++)
if(a[i]==key){
    printf("%d is present at location %d\n",key,i);
    found=1;
}
if(found==0)
printf("Element is not found");
return 0;
}

// Output 1:
// Enter number of elements:5
// Enter 5 elements 1 2 3 4 2 2
// Enter element to search:2
// 2 is present at location 1
// 2 is present at location 4
// Output 2:
// Enter number of elements:6
// Enter 6 elements 1 54 3 32 5 -5
// Enter element to search:4
// Element is not found
