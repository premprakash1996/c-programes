// linked list deletion at any position 
// all edge cases covered

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
	
	if(k<=1 || *head==NULL){
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

void delet(struct list **head, int k){
	struct list *p,*q;
	if(*head==NULL){
		cout<<"List is already empty";
		return ;
	}
	if(k<=1){				// will work and delete first node if the position is less than 2
		p=*head;
		*head=(*head)->next;
		delete p;
		return ;
	}
	else{
		p=*head;
		while(p!=NULL && k>1){
			q=p;
			p=p->next;
			k--;
		}
		if(p==NULL){
			cout<<"Chal hatt bc... position doesnt exist";
		}	
		else{
			q->next=p->next;
			delete p;
		}
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
	
	cout<<"\nDeletion\n";

	do{
		cout<<"at what position u want to delete??";
		cin>>pos;
		
		delet(&head,pos);
		
		cout<<"updated linked list: ";
		show(head);
		
		cout<<"Do u want to delete more?? press 1";
		cin>>i;
	}while(i==1);
	
	getch();
}
