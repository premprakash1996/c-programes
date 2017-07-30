// finding cycle n a linked list

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

struct list *findcycle(struct list *head){
	struct list *ptr1=head,*ptr2=head;
	while( ptr1!=NULL && ptr1->next!=NULL ){
		ptr1=ptr1->next->next;
		ptr2=ptr2->next;
		if(ptr1==ptr2)
			return ptr1;
	}
	
	return NULL;
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
	
	val=head;
	while(val->next!=NULL)
		val=val->next;
	
	val->next=head->next->next->next;
	
	val=findcycle(head);
	
	if(val){
		cout<<"Yes there is a cycle found at "<<val->data;
	}
	else 
		cout<<"No cycle";
	getch();
}
