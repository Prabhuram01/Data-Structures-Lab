// We have discussed queue operations called insert () and delete () in the class. Also illustrated with examples. Design and implement a menu driven C program with 4 operations. (1) Add element to Queue (2) Delete element from Queue (3)
// Traverse elements and (4) Exit. Write all possible examples supported by relevant test cases.  (Use Dynamic Implementation for character dataImplementation for character data) 

// Program(C):
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
char data;
struct node *next;
}*new,
*rear,
*front,
*dis,
*temp;
void push(){
int i=1;
char value[100];
printf("enter the Letter to push:");
scanf("%s",&value[i]);
new=(struct node*)malloc(sizeof(struct
node*));
new->data=value[i];
i++;
new->next=NULL;
if (rear==NULL && front==NULL){
front=new;
rear=new;
}
else{
rear->next=new;
rear=new;
}
}
void pop(){
if (front==NULL )
{
printf("Queue is empty\n");
}
else{
temp=front;
printf("deleted element %c\n",front->data);
front=front->next;
temp->next=NULL;
free(temp);
}
}
void display()
{
dis = front;
if(front == NULL)
{
printf("Queue is empty\n");
}
else
{
while(dis != NULL)
{
printf("%c ",dis -> data);
dis = dis -> next;
}
}
}
int main()
{
int option;
printf("1.push\n2.pop\n3.display\n4.stop\n");
while (1)
{
printf("enter the option:");
scanf("%d",&option);
switch(option){
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
exit(0);
}
}
return 0;
}

// Output 1:
// 1.push
// 2.pop
// 3.display
// 4.stop
// enter the option:1
// enter the Letter to push:a
// enter the option:1
// enter the Letter to push:b
// enter the option:1
// enter the Letter to push:c
// enter the option:2
// deleted element a
// enter the option:2
// deleted element b
// enter the option:3
// c enter the option:4

// Output 2:
// 1.push
// 2.pop
// 3.display
// 4.stop
// enter the option:2
// Queue is empty
// enter the option:3
// Queue is empty
// enter the option:1
// enter the Letter to push:a
// enter the option:2
// deleted element a
// enter the option:2
// Queue is empty
// enter the option:3
// Queue is empty
// enter the option:4
