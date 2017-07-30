//merge two sorted lists and produce a sorted list

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

struct list *merge(struct list *head, struct list *head1){
	
	struct list *val,*tmp;
	val=NULL;
	while(head && head1){
		if(!val){
			val= new list;
			tmp=val;
		}
		else{
			tmp->next=new list;
			tmp=tmp->next;
		}
		tmp->next=NULL;
		
		if((head->data) < (head1->data)){
			tmp->data=head->data;
			head=head->next;
		}
		else{
			tmp->data=head1->data;
			head1=head1->next;
		}
	}
	
	while(head){
		if(!val){
			val= new list;
			tmp=val;
		}
		else{
			tmp->next=new list;
			tmp=tmp->next;
		}
		tmp->next=NULL;
		tmp->data=head->data;
		head=head->next;
	}
	
	while(head1){
		if(!val){
			val= new list;
			tmp=val;
		}
		else{
			tmp->next=new list;
			tmp=tmp->next;
		}
		tmp->next=NULL;
		tmp->data=head1->data;
		head1=head1->next;
	}
	return val;
}

void show(struct list *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	struct list *head,*head1,*val;
	head=NULL;
	head1=NULL;
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
	insert(&head,100,10);
	insert(&head,110,11);
	
	cout<<"linked list1: ";
	show(head);
	val=head;
	
	insert(&head1,5,1);
	insert(&head1,6,2);
	insert(&head1,34,3);
	insert(&head1,40,4);
	insert(&head1,53,5);
	insert(&head1,64,6);
	insert(&head1,80,7);
	insert(&head1,96,8);
		
	cout<<"\nlinked list2: ";
	show(head1);
	
	val=merge(head,head1);
	cout<<"\nMerged linked list: ";
	show(val);
	
	getch();
}
