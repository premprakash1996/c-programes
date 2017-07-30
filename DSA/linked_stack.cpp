#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct stack
{
	int data;
	struct stack *next;
}*h,*top;
void push()
{
	struct stack *p;
	p=new stack;
	cout<<"Enter the element to be inserted:";
	cin>>p->data;
	p->next=NULL;
	if(top==NULL)
	{h=top=p;}
	else
	{
		top->next=p;
		top=top->next;
	}
}
void pop()
{
	struct stack *ptr,*p;
	if(top==NULL)
	printf("Stack is already empty\n");
	else
	{
		if(h==top)
		{
			ptr=top;
			top=h=NULL;
			delete ptr;
		}	
		else if(h->next==top)
		{
			ptr=top;
			top=h;
			delete ptr;
		}
		else
		{
			ptr=top;
			p=h;
			while(p->next->next!=top)
			{
				p=p->next;
			}
			top=p->next;
			delete ptr;
		}
	}
}

void display()
{
	struct stack *ptr;
	ptr=h;
	if(h==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
	while(ptr!=top)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}	
	printf("%d\n",ptr->data);
	}
}

int main()
{
	int choice,x=1;
	h=top=NULL;
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
		case 3: display();
				break;		
		default: printf("WRONG choice\n");
				 break;
	}
	printf("Press any key axcept 0 to continue,otherwise press 0\n");
	scanf("%d",&x);
	}
}
