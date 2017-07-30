#include<iostream>
#include<conio.h>
using namespace std; 

struct Node
{
     int data;
     struct Node *next;
     struct Node *prev;
};

struct Node* SortedInsert(struct Node *head,int data)
{
    struct Node *p,*h,*x;
    h=head;
    p=new Node;
    p->data=data;
    p->next=p->prev=NULL;
    if(head==NULL)
    {
        return p;
    }
    else
    {
        if(data<=h->data)
        {
            p->next=h;
            h->prev=p;
            return p;
        }
        while(h!=NULL && data>h->data)
        {
            x=h;
            cout<<"\nlol";
            h=h->next;
          //  if(h==NULL)
          // break;
        }
        cout<<"\n\n\t\t!!!!!!!!!!!!!!!!!!!!!!";
        x->next=p;
        p->prev=x;
        if(h!=NULL)
			h->prev=p;
        p->next=h;
		return head;
    }
    
}

void display(struct Node *h)
{
	if(h!=NULL)
	while(h!=NULL)
	{
		cout<<h->data<<"  ";
		h=h->next;
		if(h==NULL)
		cout<<h;
	}
	else
	cout<<"Empty\n";
}

int main()
{
	struct Node *head;
	int i=1,j,x;
	head=NULL;
	display(head);
	while(i==1)
	{
		cout<<"Enter the data : ";
		cin>>j;
		head=SortedInsert(head,j);
		cout<<"\n";
		display(head);
		cout<<"\nEnter more data?? ";
		cin>>i;
	}
	getch();
}
