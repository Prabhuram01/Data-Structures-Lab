// We have discussed linear search algorithms in the class. Implement the same algorithm using any of the languages like C/Python. Write all the possible test cases. Write down your observations. 
// Sample input
// Enter number of elements 8
// Enter 8 elements
// 44,16,18,164,47,10,0,-68
// Enter element to search 10
// Sample output
// 10 is present at location 5

// Program(C):
#include<stdio.h>
int main(){
int a[100],i,found=0,n,key;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
printf("Enter element to search:");
scanf("%d",&key);
for(i=0;i<=n-1;i++)
if(a[i]==key){
    printf("%d is present at location %d",key,i);
    found=1;
    break;
}
if(found==0)
printf("Element is not found");
return 0;
}

// Output 1:
// Enter number of elements:5
// Enter 5 elements:1 2 -5 6 0
// Enter element to search:-5
// -5 is present at location 2
// Output 2:
// Enter number of elements:5
// Enter 5 elements: 1 2 3 4 5
// Enter element to search:6
// Element is not found
