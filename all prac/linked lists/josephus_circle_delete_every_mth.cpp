// Josephus circle, delete every mth member

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

void josephus(struct cll **head, int m){
	struct cll *ptr=*head,*t;
	if(!(*head)) return ;
	
	int i;
	
	while( (*head) != (*head)->next ){
		i=m;
		cout<<"\n";
		show(*head);
		while(i>2){
			ptr=ptr->next;		
			i--;
		}
			
		t=ptr->next;	
		ptr->next=t->next;
		if(t==*head)
			*head=t->next;
		delete t;
		ptr=ptr->next;
	}
}

int main(){
	struct cll *head;
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
	
	cout<<"Enter the Mth member u wannna delete: ";
	cin>>i;
	
	josephus(&head,i);
	
	cout<<"The last element remaining is: "<<head->data;
	
	getch();
}
