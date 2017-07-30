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

void disp(struct ll *head)
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
	cout<<head->data;
}
}
int main()
{
	struct ll *head;
	head=NULL;
	int x,i=1;
	while(i==1)
	{
		cout<<"Enter\n1-create\n2-display\n";
		cin>>x;
		switch(x)
		{
			case 1: head=create(head);
					break;
			case 2: disp(head);
					break;
			default: break;				
		}	
	cout<<"More operations press 1\n";
	cin>>i;
	}	
	getch();
}
