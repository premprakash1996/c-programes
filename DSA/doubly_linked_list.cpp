#include<iostream>
#include<conio.h>
using namespace std;
struct dll
{
	int data;
	struct dll *prev,*next;
};

struct dll* create(struct dll *h)
{
	struct dll *p,*s;
	p=new dll;
	cout<<"Enter the no to insert";
	cin>>p->data;
	p->next=NULL;
	if(h==NULL)
	{
		p->prev=NULL;
		h=p;
	}
	else
	{
		s=h;
		while(s->next!=NULL)
		s=s->next;
		s->next=p;
		p->prev=s;		
	}
	return h;
}

struct dll* del(struct dll *h)
{
	int x,i;
	struct dll *p;
	if(h==NULL)
	cout<<"The list is empty.\n";
	else
	{
		cout<<"Enter which element position u want to delete:";
		cin>>x;
		p=h;	
		for(i=1;i<x;i++)
		{
			p=p->next;
		}
		if(p->prev==NULL)
		{
			h=p->next;
			if(h!=NULL)
			h->prev=NULL;
		}
		else if(p->next==NULL)
		{
			p->prev->next=NULL;
		}
		else
		{
			p->prev->next=p->next;
			p->next->prev=p->prev;
		}
		delete p;
	}
	return h;
}

void display(struct dll *h)
{
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
}

void revdisplay(struct dll *h)
{
	while(h->next!=NULL)
	{
		h=h->next;
	}
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->prev;
	}
}

int main()
{
	struct dll *head;
	int i=1;
	char x;
	head=NULL;
	while(i!=0)
	{
		cout<<"Enter your choice:\n1-Insert\n2-Delete\n3-Diplay\n4-ReverseDisplay\n";
		x=getch();
		switch(x) 
		{
			case '1':head=create(head);
					break;
			case '2':head=del(head);		
			case '3':display(head);
					break; 
			case '4':revdisplay(head);
					break; 
			default:cout<<"Wrong Choice!!!\n";
					break;		
		}
		cout<<"More operations:???\nPress any except 0";
		cin>>i;	
	}
}
