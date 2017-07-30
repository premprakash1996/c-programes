#include<iostream>
#include<conio.h>
using namespace std;
struct cqueue
{
	int data;
	struct cqueue *next;
}*front,*rear;

void enqueue()
{
	struct cqueue *q;
	q=new cqueue;
	cout<<"Enter the element to be inserted: ";
	cin>>q->data;
	q->next=NULL;
	if(rear==NULL)
	{
		front=rear=q;
		q->next=q;
	}
	else
	{
		rear->next=q;
		rear=rear->next;
		q->next=front;
	}
}

void dequeue()
{
	struct cqueue *q;
	if(rear==NULL)
	cout<<"The Circular Queue is already empty\n";
	else
	{
		if(rear==front)
		{
			q=front;
			rear=front=NULL;
			delete q;
		}
		else
		{
			q=front;
			rear->next=front->next;
			front=front->next;
			delete q;
		}
	}
	
}

void display()
{
	struct cqueue *q;
	q=front;
	if(rear==NULL)
	cout<<"The Circular Queue is empty\n";
	while(q!=rear)
	{
		cout<<q->data<<"->";
		q=q->next;
	}
	if(q!=NULL)
	{
		cout<<q->data<<"--------->";
		q=q->next;
		cout<<q->data<<"\n";		
	}
}

int main()
{
	int x=1,i;
	front=rear=NULL;
	while(x==1)
	{
		cout<<"Press\n1-Enqueque\n2-Dequeue\n3-Display\n";
		cin>>i;
		switch(i)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;			
			case 3: display();
					break;
			default : break;		
		}	
		cout<<"Want more operations??  Press 1: ";
		cin>>x;
	}
}
