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
	return h;
}

struct ll* ccreate(struct ll *h)
{
	struct ll *ptr,*p;
	ptr=new ll;
	cout<<"Enter the data";
	cin>>ptr->data;
	ptr->next=NULL;
	if(h==NULL)
	{h=ptr; h->next=h;}
	else
	{
		p=h;
		ptr->next=p;
		while(p->next!=h)
			p=p->next;	
		p->next=ptr;	
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
	p=h;
	while(p!=NULL)
	{
		p=p->next;
		if(p==h)
		{
			cout<<"YESSS The given ll is cyclic.";
			break;	
		}
	}
	if(p==NULL)
	cout<<"NOOO The given ll is not cyclic.";
}
int main()
{
	struct ll *head;
	int x,y=1,i;
	while(y==1)
	{	cout<<"Enter\n1-create cycle\n2-create strt linked list\n";
		cin>>x;
		i=1;
		switch(x)
		{
			case 1: 	head=NULL;
						while(i==1)
						{head=ccreate(head);
						cout<<"More nodes press 1\n";
						cin>>i;}
						cout<<"The ll is:\n";
						cdisp(head);
						break;
			case 2:     head=NULL;
						while(i==1)
						{head=create(head);
						cout<<"More nodes press 1\n";
						cin>>i;}
						cout<<"The ll is:\n";
						disp(head);
						break;			
			default:    break;				
		}
		check(head);	
		cout<<"\nWant to check for more ll press 1: ";
		cin>>y;
	}
}
