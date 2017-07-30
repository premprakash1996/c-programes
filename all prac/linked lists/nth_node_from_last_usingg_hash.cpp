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
		cout<<head->data<<" "<<head<<" ";
		head=head->next;
	}
}

void findfromlast(struct list *head, int k){
	
	int arr[20],i=0;
	while(head!=NULL){
		arr[++i]= (unsigned int)(head);
		head=head->next;
	}
	
	cout<<"The kth last element from end is "<<((struct list*) (arr[i-k+1]))->data;
	
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
	
	findfromlast(head,i);
	
	getch();
}
