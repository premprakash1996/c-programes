// finding the merge point of two lists using stacks

#include<iostream>
#include<stack>
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

struct list *findmerge(struct list *head, struct list *head1, stack <struct list *> s1, stack <struct list *> s2){
	struct list *p;
	p=head;
	while(p){
		s1.push(p);
		p=p->next;
	}
	p=head1;
	while(p){
		s2.push(p);
		p=p->next;
	}
	struct list *x,*y;
	cout<<"\n\n";
	do{
		x=s1.top();
		y=s2.top();
		s1.pop();
		s2.pop();
	}while (s1.top()==s2.top());
	
	return x;
	
}



void show(struct list *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	struct list *head,*head1,*val;
	stack <struct list *> s1,s2;
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
	
	insert(&head1,1,1);
	insert(&head1,2,2);
	insert(&head1,3,3);
	insert(&head1,4,4);
	
	while(i++<7)
		val=val->next;
		
	head1->next->next->next->next=val;		// comment this line to see no merge
	
	cout<<"\nlinked list2: ";
	show(head1);
	
	val=findmerge(head,head1,s1,s2);
	
	cout<<"The merge point is "<<val->data;
	
	getch();
}
