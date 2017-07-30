#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

struct node* add_end(struct node *h)
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

void temp_add_end(struct node *h)
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
}

struct node* del_end(struct node *h)
{
	struct node *p,*s;
	if(h==NULL)
	cout<<"List is already empty\n";
	else
	{
		s=h;
	if(h->next==NULL)
		h=NULL;
	else
	{while(s->next!=NULL)
	{
		p=s;
		s=s->next;
	}
	p->next=NULL;
	}
	delete s;
	}	
	return h;
} 

void temp_del_end(struct node *h)
{
	struct node *p,*s;
	if(h==NULL)
	cout<<"List is already empty\n";
	else
	{
		s=h;
	if(h->next==NULL)
		h=NULL;
	else
	{while(s->next!=NULL)
	{
		p=s;
		s=s->next;
	}
	p->next=NULL;
	}
	delete s;
	}	
} 

void display(struct node *h)
{
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
}

int main()
{
	struct node *head;
	int i=1,j;
	char x;
	head=NULL;
	cout<<"Enter your choice:\n1-Add In Beginning\n2-Add in last\n3-Add at last witht return\n4-Delete the starting\n";
	cout<<"5-Delete from last\n6-Delete at a givem position\n7-For Display\n";
	while(i!=0)
	{
		x=getch();
		switch(x) 
		{
			case '2':head=add_end(head);
					break;
			case '3':temp_add_end(head);
					break;
			case '5':head=del_end(head);
					break;
			case '6':temp_del_end(head);
					break;		
			case '7':display(head);
					break;
			default:cout<<"Wrong Choice!!!\n";
					break;		
		}
		cout<<"More operations:???\nPress any except 0";
		cin>>i;	
	}
}
