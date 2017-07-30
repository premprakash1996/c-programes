// circularll insertion at any position 
// all edge cases covered

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
	struct cll *head;
	head=NULL;
	int i=0,pos,val;
	do{
		cout<<"Enter the element u want to insert";
		cin>>val;
		cout<<"at what position??";
		cin>>pos;
		
		insert(&head,val,pos);
		
		cout<<"updated linked cll: ";
		show(head);
		
		cout<<"Do u want to insert more?? press 1";
		cin>>i;
	}while(i==1);
	
	getch();
}
