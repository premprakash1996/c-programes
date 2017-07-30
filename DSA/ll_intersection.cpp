#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct ll
{
	int data;
	struct ll *next;
}*head1,*head2;

void create(int x, int f=0)
{
	struct ll *p,*h;
	cout<<"Enter the element to be added";
	p=new ll;
	cin>>p->data;
	p->next=NULL;
	if(x==1 || f==1)
	{
		if(head1==NULL)
		head1=p;	
		else
		{
			h=head1;
			while(h->next!=NULL)
			h=h->next;
			h->next=p;
		}
	}
	else if(x==2)
	{
		if(head2==NULL)
		head2=p;	
		else
		{
			h=head2;
			while(h->next!=NULL)
			h=h->next;
			h->next=p;
		}
	}
	else if(x==3)
	{
			h=head1;
			while(h->next!=NULL)
			h=h->next;
			h->next=p;
			h=head2;
			while(h->next!=NULL)
			h=h->next;
			h->next=p;
	}
}

void disp()
{
	struct ll *h=head1;
	cout<<"List 1:\n";
	while(h->next!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
	cout<<h->data<<"\n";
	h=head2;
	cout<<"List 2:\n";
	while(h->next!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
	cout<<h->data<<"\n";
}

void check_intersect()
{
	int f=0;
	struct ll *h1=head1,*h2;
	while(h1!=NULL)
	{
		h2=head2;
		while(h2!=NULL)
		{
			if(h1==h2)
			{
				f=1;
				cout<<"\nThe two lists are intersecting";
				break;
			}
			h2=h2->next;
		}
		if(f==1)
		break;
		h1=h1->next;
	}
	if(h1==NULL)
	cout<<"\nNot Intersecting";
}

int main()
{
	int x,y=1,i,f=0;
	head1=NULL;
	head2=NULL;
	while(y==1)
	{
		cout<<"Enter\n1. To Append list 1\n2. To append list 2\n3. To Append both together(intersection)\n4. To Display";
		cin>>x;
		switch(x)
		{
			case 1: create(x,f);
					break;
			case 2: create(x,f);
					break;		
			case 3: create(x,f);
					f=1;				
					break;
			case 4: disp();	
					break;	
			default: break;		
		}		
		cout<<"Press 1 To Do More Operations?? ";
		cin>>y;
	}
	check_intersect();
	getch();
}
