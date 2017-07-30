// doubly linked list insertion at any position 
// all edge cases covered

#include<iostream>
#include<conio.h>

using namespace std;

struct dll{
	int data;
	struct dll *next;
	struct dll *prev;
};

void insert(struct dll **head,int val, int k){
	
	struct dll *newnode,*p,*q=NULL;
	
	newnode= new dll;
	
	if(!newnode){
		cout<<"Memory error";
		return ;
	}
	
	newnode->data=val;
	
	if(k<=1 || *head==NULL){					// can be covered here also
		newnode->next=*head;
		newnode->prev=NULL;
		if(*head)
			(*head)->prev=newnode;
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
		newnode->prev=q;
		newnode->next=p;
		if(p!=NULL)
		p->prev=newnode;
	}
}

void show(struct dll *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

void showrev(struct dll *head){
	if(!head)
	return ;
	while(head->next!=NULL){
	//	cout<<head->data<<" ";
		head=head->next;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->prev;
	}
}

int main(){
	struct dll *head;
	head=NULL;
	int i=0,pos,val;
	do{
		cout<<"Enter the element u want to insert";
		cin>>val;
		cout<<"at what position??";
		cin>>pos;
		
		insert(&head,val,pos);
		
		cout<<"\nupdated linked dll: ";
		show(head);
		
		cout<<"\nupdated linked dll reverse order: ";
		showrev(head);
		
		cout<<"Do u want to insert more?? press 1";
		cin>>i;
	}while(i==1);
	
	getch();
}
