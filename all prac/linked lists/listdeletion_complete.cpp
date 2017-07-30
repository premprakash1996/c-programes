// complete linked list deletion 

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
//		if(q!=NULL)         		// if the list is empty and the position of insertion given is more than one
			q->next=newnode;
//		else
//			*head=newnode;
		newnode->next=p;
	}
}

void dellist(struct list **head){
	struct list *p;
	while((*head)!=NULL){
		p=*head;
		*head=(*head)->next;
		delete p;
	}
}

void show(struct list *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	struct list *head;
	head=NULL;
	int i=0,pos,val;
	do{
		cout<<"Enter the element u want to insert";
		cin>>val;
		cout<<"at what position??";
		cin>>pos;
		
		insert(&head,val,pos);
		
		cout<<"updated linked list: ";
		show(head);
		
		cout<<"Do u want to insert more?? press 1";
		cin>>i;
	}while(i==1);
	
	cout<<"So lets delete complete list";
	dellist(&head);
	
	cout<<"\nupdated linked list: ";
	show(head);
		
	getch();
}
