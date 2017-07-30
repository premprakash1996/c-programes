#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct stack
{
	char data;
	struct stack *next;
}*h,*top;
void push(char c)
{
	struct stack *p;
	p=new stack;
	p->data=c;
	p->next=NULL;
	if(top==NULL)
	{h=top=p;}
	else
	{
		top->next=p;
		top=top->next;
	}
}
int pop(char c)
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

int main()
{
	char c[50];
	int i=0,k,j;
	x:
	h=top=NULL;
	cin>>c;
	k=strlen(c);
	while(i<k)
	{
		if(c[i]==40 || c[i]==91 || c[i]==123)
		push(c[i]);
		else if(c[i]==41 || c[i]==93 || c[i]==125)
		{
			j=pop(c[i]);
	     	if(j==1)
	     	break;
		}
		else 
		{printf("Enter expression in crrct format\n"); goto x;}	
		i++;
	}
	if(h==NULL&&top==NULL)
	printf("The given set is balanced");
	else
	printf("The given set is not balanced");
}
