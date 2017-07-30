// insert node in a sorted linked list

#include<iostream>
#include<conio.h>

using namespace std;

struct list{
	int data;
	struct list *next;
};

void insert(struct list **head,int val, int k){
	
	struct list *newnode,*p,*q=NULL;
	
	newnode= new list;
	
	if(!newnode){
		cout<<"Memory error";
		return ;
	}
	
	newnode->data=val;
	
	if(k<=1 || *head==NULL){					// can be covered here also
		newnode->next=*head;
		*head=newnode;
	}
	
	else{
		p=*head;
		while(p!=NULL && k>1){
			q=p;
			p=p->next;
			k--;
		}
		
			q->next=newnode;

		newnode->next=p;
	}
}


void insertinsort(struct list **head, int k){
	
	struct list *newnode,*p=*head,*q;
	
	newnode=new struct list;
	newnode->data=k;
	
	if( !(*head) || k<=(*head)->data ){
		newnode->next=*head;
		*head=newnode;
		return ;
	}
	
	while(p!=NULL && p->data<k){
		q=p;
		p=p->next;
	}
	
	q->next=newnode;
	newnode->next=p;
	
}

void show(struct list *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	struct list *head,*val;
	head=NULL;
	int i=0;
		
	insert(&head,10,1);
	insert(&head,20,2);
	insert(&head,30,3);
	insert(&head,40,4);
	insert(&head,50,5);
	insert(&head,60,6);	
	insert(&head,70,7);
	insert(&head,80,8);
	insert(&head,90,9);
	
	cout<<"linked list: ";
	show(head);
	
	cout<<"Enter what u want to insert ";
	cin>>i;
	
	insertinsort(&head,i);
	
	cout<<"After new insertion: ";
	show(head);
	
	getch();
}
