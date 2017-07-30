// using arrays
#include<iostream>
#include<conio.h>
# define size 8

using namespace std;

int enqueue(int a[], int &rear, int val){
	if(rear>=size-1){
		cout<<"No more space, ";
		return 0;
	}
	a[++rear]=val;
	return 1;
}

int dequeue(int &front, int &rear){
	if(front<rear){
		front++;
		return 1;
	}
	else if(front==rear){
		front=0;
		rear=-1;
		return 1;
	}
	else return 0;
}

int main(){
	int a[size],rear=-1,front=0,i=5,x,val;
	while(i==5){
		cout<<"What do u want to do?? Enqueue(1) or dequeue(2) or view(3)";
		cin>>x;
		switch(x){
			case 1: cout<<"Enter the element: ";
					cin>>val;
					if(enqueue(a,rear,val))
						cout<<"Queued successfully, no. of elements now "<<rear-front+1<<"\n";
					else
						cout<<"queueing unsuccessfull, no. of elements still "<<rear-front+1<<"\n";
					break; 
			case 2: if(dequeue(front,rear))
						cout<<"successfully dequeued, no. of elements in the queue now "<<rear-front+1<<"\n";
					else
						cout<<"Dequeueing unsuccessfull, Queue is already empty\n";
					break;
			case 3: if(front>rear)
						cout<<"The queue is empty broda!!";
					else{
						cout<<"The queue is: ";
						for(int j=front;j<=rear;j++)
							cout<<a[j]<<"  ";
					}						
					break;
			default: cout<<"Be in ur boots";			
		}
		cout<<"Wanna have more operations?? Press 5";
		cin>>i;
	}
	getch();
}
