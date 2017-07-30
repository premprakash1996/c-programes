#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

struct node* add(struct node *h)
{
	struct node *p,*s;
	cout<<"Enter the element to be added";
	p=new node;
	cin>>p->data;
	p->next=NULL;
	if(h==NULL)
	h=p;
	else
	{
		s=h;
		while(s->next!=NULL)
		s=s->next;
		s->next=p;
	}
	return h;
}

void display(struct node *h)
{
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
}

struct node* reverse(struct node *h)
{
	struct node *x,*t,*p;
	x=t=p=h;
	if(h->next->next==NULL)
	{
		p=p->next;
		p->next=h;
		h->next=NULL;
		return p;
	}
	else if(h!=NULL)
	{
		x=NULL;
		while(t!=NULL)
		{
			p=p->next;
			t->next=x;
			x=t;
			t=p;
		}			
		return x;
	}
} 

int main()
{
	struct node *head;
	int i=1,j;
	char x;
	head=NULL;
	cout<<"Enter your choice:\n1-Add\n2-display\n";
	while(i!=0)
	{
		x=getch();
		switch(x) 
		{
			case '1':head=add(head);
					break;
			case '2':display(head);
					break;
			default:cout<<"Wrong Choice!!!\n";
					break;		
		}
		cout<<"More operations:???\nPress any except 0";
		cin>>i;	
	}
	head=reverse(head);
	display(head);
	getch();
}
