#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int element;
	struct Node *next;
}*top,*ptr,*np,*save;
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
	if(top==NULL)top=ptr;
	else
	{
		save=top;
		top=ptr;
		ptr->next=save;
	}
}
void pop()
{
	struct Node *np,*temp;
	np=top;temp=top;
	while(top->next->next!=NULL)
		top=top->next;
	np=top->next;
	free(np);
	top->next=NULL;
	top=temp;
}
void display()
{
	struct Node *np=top;
	while(top!=NULL)
	{
		printf("\n %d",top->element);
		top=top->next;
	}
top=np;
}
int main()
{
	top=NULL;
	struct Node *temp;
	int ele,choice=1;
	printf("\t\t\t\tLinked List\n\n");
while(choice==1)
{
	printf("1. Push\n2. pop\n3. display");
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
