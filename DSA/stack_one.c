#include<stdio.h>
#include<conio.h>
struct stack
{
	int a[50],top;
}s;
int isfull()
{
	if(s.top==49)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(s.top==-1)
	return 1;
	else
	return 0;
}
void push()
{
	int e;
	if(isfull())
	printf("The stack is full.\n");
	else
	{
		printf("Enter the element to be inserted\n");
		scanf("%d",&e);
		s.top++;
		s.a[s.top]=e;
	}
}
void pop()
{
	if(isempty())
	printf("The stack is already empty.\n");	
	else 
	s.top--;
}
void view()
{
	int i;
	printf("The status of stack is:\n");
	for(i=0;i<=s.top;i++)
	printf("%d\n",s.a[i]);
}
int main()
{
	int choice,x=1;
	s.top=-1;
	while(x!=0)
	{
	printf("Enter ur choice as:\n1 for insertion(PUSH)\n2 for deletion(POP)\n3 to see stack\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: view();
				break;		
		default: printf("WRONG choice\n");
				 break;
	}
	printf("Press any key axcept 0 to continue,otherwise press 0\n");
	scanf("%d",&x);
	}
	getch();
}
