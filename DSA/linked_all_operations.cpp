#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

struct node* add_beg(struct node *h)
{
	struct node *p;
	cout<<"Enter the element to be added";
	p=new node;
	cin>>p->data;
	p->next=h;
	h=p;
	return h;
}

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

struct node* add_pos(struct node *h)
{
	struct node *p,*s;
	int pos,i;
	cout<<"Enter at which position you want to insert:";		
	cin>>pos;
	cout<<"Enter the element to be added";
	p=new node;
	cin>>p->data;
	if(pos==1)
	{
			p->next=h;
			h=p;
	} 
	else
	{ 
		s=h;
		for(i=2;i<pos;i++)
		s=s->next;
		p->next=s->next;
		s->next=p;
	}
	return h;
}

struct node* del_beg(struct node *h)
{
	struct node *p;
	if(h==NULL)
	cout<<"List is already empty\n";
	else
	{p=h;
	h=h->next;
	delete p;}
	return h;
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

struct node* del_pos(struct node *h)
{
	struct node *s,*p;
	int pos,i;
	if(h==NULL)
	cout<<"List is already empty\n";
	else
	{
	cout<<"Enter the position of element you want to delete";
	cin>>pos;
	s=h;
	if(h->next==NULL)
	h=NULL;
	if(pos==1)
	{
		h=h->next;
	}
	else
	{
	for(i=1;i<pos;i++)
	{
		p=s;
		s=s->next;
	}	
	p->next=s->next;
	}
	delete s;
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

int main()
{
	struct node *head;
	int i=1,j;
	char x;
	head=NULL;
	cout<<"Enter your choice:\n1-Add In Beginning\n2-Add in last\n3-Add at a given position\n4-Delete the starting\n";
	cout<<"5-Delete from last\n6-Delete at a givem position\n7-For Display\n";
	while(i!=0)
	{
		x=getch();
		switch(x) 
		{
			case '1':head=add_beg(head);
					break;
			case '2':head=add_end(head);
					break;
			case '3':head=add_pos(head);
					break;		
			case '4':head=del_beg(head);
					break;
			case '5':head=del_end(head);
					break;
			case '6':head=del_pos(head);				
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
