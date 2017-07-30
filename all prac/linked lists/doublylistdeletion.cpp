// linked dll deletion at any position 
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

void delet(struct dll **head, int k){
	struct dll *p;
	if(*head==NULL){
		cout<<"dll is already empty";
		return ;
	}
	if(k<=1){				// will work and delete first node if the position is less than 2
		p=*head;
		*head=(*head)->next;
		if(*head)
			(*head)->prev=NULL;
		delete p;
		return ;
	}
	else{
		p=*head;
		while(p->next!=NULL && k>1){
			p=p->next;
			k--;
		}
		if(k>1){
			cout<<"hatt bc.. position doesnot exist";
			return ;
		}
		
		//q=p;
		p->prev->next=p->next;
		if(p->next!=NULL){
			p->next->prev=p->prev;
		}
			
		delete p;
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
		
		cout<<"updated dll: ";
		show(head);
		
		cout<<"Do u want to insert more?? press 1";
		cin>>i;
	}while(i==1);
	
	cout<<"\nDeletion\n";

	do{
		cout<<"at what position u want to delete??";
		cin>>pos;
		
		delet(&head,pos);
		
		cout<<"\nupdated dll: ";
		show(head);
		
		cout<<"\nupdated linked dll reverse order: ";
		showrev(head);
		
		cout<<"Do u want to delete more?? press 1";
		cin>>i;
	}while(i==1);
	
	getch();
}
