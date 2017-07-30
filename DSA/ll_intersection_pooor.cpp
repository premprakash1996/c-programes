#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct ll
{
	int data;
	struct ll *next;
}*head1,*head2,*is;

void create(struct ll *h,int x)
{
	struct ll *p,*s;
	cout<<"Enter the element to be added";
	p=new ll;
	cin>>p->data;
	p->next=NULL;
	if(h==NULL)
	{
		if(x==1)
		head1=p;
		else if(x==2)
		head2=p;
	}
	else
	{
		if(x==1 || x==3)
		{
		s=h;
		while(s->next!=NULL)
		s=s->next;
		s->next=p;
	//	head1=h;
		}
		else if(x==2)
		{
		s=h;
		while(s->next!=NULL)
		s=s->next;
		s->next=p;
	//	head2=h;
		}
	}
	if(x==3)
	{
		s=head2;
		while(s->next!=NULL)
		s=s->next;
		s->next=p;
		is=p;
	//	head2=h;
	}
}

void disp(struct ll *h1,struct ll *h2)
{
	cout<<"List 1:\n"
	while(h1->next!=NULL)
	{
		cout<<h1->data<<"->";
		h1=h1->next;
	}
	cout<<h1->data<<"\n";
	cout<<"List 2:\n"
	while(h2->next!=NULL)
	{
		cout<<h2->data<<"->";
		h2=h2->next;
	}
	cout<<h2->data<<"\n";
}

int main()
{
	struct ll *p,*x;
	int x,y=1,i;
	head1=NULL;
	head2=NULL;
	while(y==1)
	{
		cout<<"Enter\n1. To Append list 1\n2. To append list 2\n3. To Append both together(intersection)\n4. To Display";
		cin>>x;
		switch(x)
		{
			case 1: create(head1,x);
					break;
			case 2: create(head2,x);
					break;		
			case 3: create(head1,x);
				/*	while(p->next!=NULL)
					p=p->next;
					x=head2;
					while(x->next!=NULL)
					x=x->next;
					x->next=p;	*/				
					break;
			case 4: disp(head1,head2);	
					break;	
			default: break;		
		}		
		cout<<"Do More Operations?? ";
		cin>>y;
	}
	
}
