#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct ll
{
	int data;
	struct ll *next;
};

struct ll* create(struct ll *h)
{
	int i=0,j;
	struct ll *p,*s;
	cout<<"Enter the element to be added";
	p=new ll;
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
	cout<<"Press 1 if u want to create cycle: ";
	cin>>i;
	if(i==1)
	{
		cout<<"Enter the position at which you want to connect: ";
		cin>>j;
		s=h;
		for(i=1;i<j;i++)
		s=s->next;
		p->next=s;
	}
	return h;
}

void cdisp(struct ll *head)
{
	struct ll *h;
	h=head;
	if(head==NULL)
	cout<<"Empty";
	else
{

	while(head->next!=h)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<head->data<<"->";
	head=head->next;
	cout<<head->data<<"\n";
}
}

void disp(struct ll *h)
{
	while(h->next!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
	cout<<h->data<<"\n";
}

// TO CHECK WHETHER IT IS CYCLIC OR NOT
void check(struct ll *h)
{
	struct ll *p;
	struct ll *a[100];
	int x=0,f=0,i;
	p=h;
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		a[x++]=p;
		p=p->next;
		for(i=0;i<x;i++)
		if(p==a[i])
		{
			cout<<p->data;
			cout<<"\nYESSS The given ll is cyclic.";
			f=1;
			break;	
		}
		if(f==1)
		break;
	}
	if(p==NULL)
	cout<<"\nNOOO The given ll is not cyclic.";
}
int main()
{
	struct ll *head;
	int x,y=1,i;
	while(y==1)
	{	cout<<"Enter\n1-create the linked list\n";
		cin>>x;
		i=1;
		switch(x)
		{
			case 1:     head=NULL;
						while(i==1)
						{head=create(head);
						cout<<"More nodes press 1\n";
						cin>>i;}
						break;		
			default:    break;				
		}
		check(head);	
		cout<<"\nWant to check for more ll press 1: ";
		cin>>y;
	}
}
