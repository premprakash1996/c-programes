// split a circular list

#include<iostream>
#include<conio.h>

using namespace std;

struct cll{
	int data;
	struct cll *next;
};

void insert(struct cll **head,int val, int k){
	
	struct cll *newnode,*p,*q=NULL;
	
	newnode= new cll;
	
	if(!newnode){
		cout<<"Memory error";
		return ;
	}
	
	newnode->data=val;
	
	if(!(*head)){
		newnode->next=newnode;
		*head=newnode;
		return ;
	}
		
	if(k<=1){
		p=*head;
		while(p->next!=(*head)){
			p=p->next;
		}
		
		p->next=newnode;
		newnode->next=*head;
		*head=newnode;
	}
	
	else{
		p=*head;
		while(k>1){
			q=p;
			p=p->next;
			k--;
		}
		q->next=newnode;
		newnode->next=p;
	}
}

void splitlist(struct cll **head, struct cll **head2){
	struct cll *p=*head,*q=*head,*r,*s;
	
	if(!(*head) || (*head)->next==*head)
		return;
	
	if((*head)->next->next==*head){
		*head2=(*head)->next;
		(*head)->next=*head;
		(*head2)->next=*head2;
		return;	
	} 
	
	do{
		r=q;
		q=q->next;
		s=p;
		p=p->next->next;
	}while(p!=*head && p!=(*head)->next);
	
	if(p==*head){
		r->next=*head;
		*head2=q;
		s->next->next=q;
	}
	else{
		r->next=*head;
		*head2=q;
		s->next=q;
	}
	
}

void show(struct cll *head){
	if(!head){
		cout<<"Empty CLL \n";
		return ;
	}
	struct cll *temp;
	temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);
	cout<<"  --->>> "<<temp->data;
}

int main(){
	struct cll *head,*head2;
	head=NULL;
	head2=NULL;
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
	
	splitlist(&head,&head2);
	
	cout<<"linked list 1: ";
	show(head);
	
	cout<<"linked list 2: ";
	show(head2);
	
	getch();
}
