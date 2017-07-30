// using linked lists
#include<iostream>
#include<conio.h>
# define size 8

using namespace std;

struct queue{
	int a;
	struct queue *next;
}*front,*rear;

void enqueue(int val){
	struct queue *q;
	q=new queue;						//     (delete)front--->---->----->----->----->----->------>rear(add)
	q->a=val;
	q->next=NULL;
	if(front==NULL){
		front=rear=q;
	}
	else{
		rear->next=q;
		rear=q;	
	}
}

int dequeue(){
	if(front==NULL){
		return 0;
	}
	else if(front==rear){
		front=NULL;
		rear=NULL;
		return 1;
	}
	else {
		front=front->next;
		return 1;
	}
}

int main(){
	rear=NULL;
	front=NULL;
	int i=5,x,val;
	while(i==5){
		cout<<"What do u want to do?? Enqueue(1) or dequeue(2) or view(3)";
		cin>>x;
		switch(x){
			case 1: cout<<"Enter the element: ";
					cin>>val;
					enqueue(val);
					cout<<"Queued successfully\n";
					break;
			case 2: if(dequeue())
						cout<<"successfully dequeued\n";
					else
						cout<<"Dequeueing unsuccessfull, Queue is already empty\n";
					break;
			case 3: if(front==NULL)
						cout<<"The queue is empty broda!!";
					else{
						cout<<"The queue is: ";
						struct queue *j=front;
						while(j!=NULL){
							cout<<j->a<<"  ";
							j=j->next;
						}
					}						
					break;
			default: cout<<"Be in ur boots";			
		}
		cout<<"Wanna have more operations?? Press 5";
		cin>>i;
	}
	getch();
}
