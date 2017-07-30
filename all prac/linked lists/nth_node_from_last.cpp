// finding nth element from last

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

struct list *findfromlast(struct list *head, int k){
	struct list *temp;
	temp=head;
	while( k>0 && temp!=NULL){
		temp=temp->next;
		k--;
	}
	if(k>0){
		cout<<"Lessser elements available";
		return NULL;
	}	
	while(temp!=NULL){
		temp=temp->next;
		head=head->next;
	}
	return head;	
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
	
	cout<<"Which element u want to find from last";
	cin>>i;	
	val=findfromlast(head,i);
	if(val){
		cout<<"The "<<i<<" value from end is: "<<val->data;
	}
	getch();
}
