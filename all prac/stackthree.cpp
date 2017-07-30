// using linked lists
#include<iostream>
#include<conio.h>

using namespace std;

struct stack{
	int data;
	struct stack *next;
}*s,*top;

void push(int val){
	struct stack *e;
	e=new stack;
	e->data=val;
	e->next=NULL;
	if(top==NULL){
		s=top=e;
	}
	else{
		top->next=e;
		top=e;
	}
}

void pop(){
	if(top==NULL){
		cout<<"Already empty\n";
	}	
	else if(s==top){
		cout<<"Element deleted successfully\n";
		s=top=NULL;
	}
	else{
		cout<<"Element deleted successfully\n";
		struct stack *e=s;
		while(e->next!=top){
			e=e->next;
		}
		top=e;
		top->next=NULL;
	}
}


int main(){
	s=NULL,top=NULL;
	int i=5,x,val;
	while(i==5){
		cout<<"Push(1) or pop(2) or view(3)";
		cin>>x;
		switch(x){
			case 1:	cout<<"\nEnter the element: ";
					cin>>val;
					push(val);	
					break;
			case 2:	pop();
					break;
			case 3:	if(s==NULL) cout<<"Nothing to print fellas.. its all empty\n";
					else{
						cout<<"The stack is:\n";
						struct stack *j=s;
						while(j!=NULL){
							cout<<j->data<<"  ";
							j=j->next;
						}
					}
					break;
			default: cout<<"Default mode";
		}
		cout<<"Wanna have more operations?? press 5 or exit";
		cin>>i;
	}
	getch();
}
