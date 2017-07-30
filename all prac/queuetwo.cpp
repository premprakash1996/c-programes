// using structure , pass by reference by pointer method
#include<iostream>
#include<conio.h>
# define size 8

using namespace std;

struct queue{
	int a[size];
	int front, rear;
};

int enqueue(struct queue *q, int val){
	if(q->rear>=size-1){
		cout<<"No more space, ";
		return 0;
	}
	q->a[++q->rear]=val;
	return 1;
}

int dequeue(struct queue *q){
	if(q->front<q->rear){
		q->front++;
		return 1;
	}
	else if(q->front==q->rear){
		q->front=0;
		q->rear=-1;
		return 1;
	}
	else return 0;
}

int main(){
	struct queue q;
	q.rear=-1;
	q.front=0;
	int i=5,x,val;
	while(i==5){
		cout<<"What do u want to do?? Enqueue(1) or dequeue(2) or view(3)";
		cin>>x;
		switch(x){
			case 1: cout<<"Enter the element: ";
					cin>>val;
					if(enqueue(&q,val))
						cout<<"Queued successfully, no. of elements now "<<q.rear-q.front+1<<"\n";
					else
						cout<<"queueing unsuccessfull, no. of elements still "<<q.rear-q.front+1<<"\n";
					break; 
			case 2: if(dequeue(&q))
						cout<<"successfully dequeued, no. of elements in the queue now "<<q.rear-q.front+1<<"\n";
					else
						cout<<"Dequeueing unsuccessfull, Queue is already empty\n";
					break;
			case 3: if(q.front>q.rear)
						cout<<"The queue is empty broda!!";
					else{
						cout<<"The queue is: ";
						for(int j=q.front;j<=q.rear;j++)
							cout<<q.a[j]<<"  ";
					}						
					break;
			default: cout<<"Be in ur boots";			
		}
		cout<<"Wanna have more operations?? Press 5";
		cin>>i;
	}
	getch();
}
