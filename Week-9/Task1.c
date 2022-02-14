// In the classroom we have discussed the algorithms to create the polynomial and addition of two polynomials . Based on the same discussion, implement a solution.
// Input:
//  	1st number = 5x2 + 4x1 + 2x0
//  	2nd number = -5x1 - 5x0
// Output:
//         5x2-1x1-3x0
// Input:
//  	1st number = 5x3 + 4x2 + 2x0
//  	2nd number = 5x^1 - 5x^0
// Output:
//         5x3 + 4x2 + 5x1 - 3x0

// Program(C):
#include <stdio.h>
#include<stdlib.h>
struct node{
    int coef,expo;
    struct node *next;
}*new1,*p1,*head1,*new2,*p2,*head2;
int main(){
    char option;
printf("Enter First Polynomial\n");
do
{
    new1=(struct node*)malloc(sizeof(struct node*));
    printf("Enter a term\n");
    scanf("%d %d",&new1->coef,&new1->expo);
    new1->next=NULL;
    if(head1==NULL){
        head1=new1;
        p1=new1;
    }
    else{
        p1->next=new1;
        p1=new1;
    }
    printf("Do you want the next term Y/N");
    scanf("%s",&option);
}while(option=='Y');

printf("Enter Second Polynomial\n");
do{
    new2=(struct node*)malloc(sizeof(struct node*));
    printf("Enter a term\n");
    scanf("%d %d",&new2->coef,&new2->expo);
    new2->next=NULL;
    if(head2==NULL){
        head2=new2;
        p2=new2;
    }
    else{
        p2->next=new2;
        p2=new2;
    }
printf("Do you want the next term Y/N");
scanf("%s",&option);
}while(option=='Y');
p1=head1;
p2=head2;
while(p1!=NULL && p2!=NULL){
    if(p1->expo==p2->expo){
        printf("%dx^%d",p1->coef+p2->coef,p1->expo);
        p1=p1->next;
        p2=p2->next;
    }
    else if(p1->expo > p2->expo){
        printf("%dx^%d",p1->coef,p1->expo);
        p1=p1->next;
    }
    else{
        printf("%dx^%d",p2->coef,p2->expo);
        p2=p2->next;
    }
    if(p1!=NULL || p2!=NULL)
    printf("+");
}
    return 0;
}

// Output:
// Enter First Polynomial
// Enter a term
// 2 3
// Do you want the next term Y/N2   Y
// Enter a term
// 2 `1  1
// Do you want the next term Y/NY
// Enter a term
// 2 0
// Do you want the next term Y/NN
// Enter Second Polynomial
// Enter a term
// 2 4
// Do you want the next term Y/NY
// Enter a term
// 2 3
// Do you want the next term Y/NY
// Enter a term
// 2 2
// Do you want the next term Y/NN
// 2x^4+4x^3+2x^2+
