// finding whether the length of list is odd or even

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

void show(struct list *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

string findlength(struct list *head){
	if(!head)
		return "NULL";
	
	struct list *p1=head;
	
	while(p1!=NULL && p1->next!=NULL){
		p1=p1->next->next;
	}
	
	if(p1)
	return "odd";
	
	return "even";
}


int main(){
	struct list *head,*val;
	string a;
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
	
	a=findlength(head);
	
	cout<<"\nThe list has "<<a<<" length";
	
	getch();
}
