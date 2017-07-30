#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int element;
	struct Node *next;
}*front,*ptr,*rear,*save;
struct Node *create_node()
{
	int ele;
	scanf("%d",&ele);
	ptr=(struct Node *)malloc(1*sizeof(struct Node));
	ptr->element=ele;
	ptr->next=NULL;	
	return ptr;
}
void push(struct Node *ptr)
{
	if(front==NULL&&rear==NULL)front=rear=ptr;
	else
	{
		ptr->next=rear;
		rear=ptr;
	}
}
void pop()
{
	struct Node *np;
	if(rear==front)rear=front=NULL;
	else if(front->next==rear)printf("Underflow!....");
	else
	{
		np=rear;
		rear=rear->next;
		free(np);
	}
}
void display()
{
	struct Node *np=rear;
	while(rear!=front)
	{
		printf("\n %d",rear->element);
	rear=rear->next;
	}
	rear=np;
}
int main()
{
	front=rear=NULL;
	struct Node *temp;
	int ele,choice=1;
	printf("\t\t\t\tLinked queue\n\n");
while(choice==1)
{
	printf("1. insertion\n2. deletion\n3. display");
	char ch=getch();
	switch(ch)
	{
		case '1': printf("\n\nenter element to push : ");
					temp=create_node();
					push(temp);
					break;
		case '2':	pop();
					break;
		case '3':	display();
					break;
		default :	printf("\n\nwrong choice !!");
					break;
	}
	printf("\n\n\n1 fro menu ...break otherwise : ");
	scanf("%d",&choice);
}
return 0;
}
