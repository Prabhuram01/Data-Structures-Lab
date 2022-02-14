// In the classroom we have discussed the algorithms for infix to postfix conversion. Based on the same discussion, implement a solution. Also run all the possible test cases.
// Testcase-1
// Infix Expression : 3+4*5/6
// Postfix Expression : 3 4 5 * 6 / +
// Testcase-2
// Infix Expression : A+(B*C-(D/E^F)*G)*H
// Postfix Expression : ABC*DEF^/G*-H*+
//  Program(C):

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 50

void push(long int symbol);
long int pop();
void infix_to_postfix();
int priority(char symbol);
int isEmpty();
int white_space(char);
char infix[MAX], postfix[MAX];
long int stack[MAX];
int top;

int main()
{
    top=-1;
    printf("Enter infix : ");
    fgets(infix,50,stdin);
    infix_to_postfix();
    printf("Postfix : %s\n",postfix);
    return 1;
}

void infix_to_postfix()
{
    unsigned int i,p=0;
    char next;
    char symbol;
    for(i=0;i<strlen(infix);i++)
    {
	symbol=infix[i];
	if(!white_space(symbol))
	{
	    switch(symbol)
	    {
	    case '(':
		push(symbol);
		break;
	    case ')':
		while((next=pop())!='(')
		    postfix[p++] = next;
		break;
	    case '+':
	    case '-':
	    case '*':
	    case '/':
	    case '%':
	    case '^':
		while( !isEmpty( ) &&  priority(stack[top])>= priority(symbol) )
		    postfix[p++]=pop();
		push(symbol);
		break;
	    default:
		 postfix[p++]=symbol;
	    }
	}
    }
    while(!isEmpty( ))
	postfix[p++]=pop();
    postfix[p]='\0';
}


int priority(char symbol)
{
    switch(symbol)
    {
    case '(':
	return 0;
    case '+':
    case '-':
	return 1;
    case '*':
    case '/':
    case '%':
	return 2;
    case '^':
	return 3;
    default :
	return 0;
    }
}

void push(long int symbol)
{
    if(top>MAX)
    {
	printf("Stack overflow\n");
	exit(1);
    }
    stack[++top]=symbol;
}

long int pop()
{
    if( isEmpty() )
    {
	printf("Stack underflow\n");
	exit(1);
    }
    return (stack[top--]);
}
int isEmpty()
{
    if(top==-1)
	return 1;
    else
	return 0;
}

int white_space(char symbol)
{
    if( symbol == ' ' || symbol == '\t' )
	return 1;
    else
	return 0;
}

// Output 1:
// Enter infix : A+(B*C-(D/E^F)*G)*H
// Postfix : ABC*DEF^/G*-H*+
// Output 2:
// Enter infix :  3+4*5/6
// Postfix : 345*6/+
