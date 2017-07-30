#include<stdio.h>
#include<conio.h>
typedef struct 
{
	int a[50];
	int front,rear;
}queue;
void enqueue(queue *q)
{
	int e;
	if(q->rear==49)
	printf("The queue is overflow.\n");
	else
	{
		printf("Enter the element to be inserted\n");
		scanf("%d",&e);
		q->rear++;
		q->a[q->rear]=e;
	}
}
void dequeue(queue *q)
{
	if(q->front==q->rear)
	{
		q->front=0;
		q->rear=-1;		
	}
	else 
	{
		if(q->front-q->rear==1)
		printf("The queue is already empty(underflow).\n");	
		else 
		q->front++;
	}	
}
void view(queue *q)
{
	int i;
	printf("The status of queue is:\n");
	for(i=q->front;i<=q->rear;i++)
	printf("%d\n",q->a[i]);
}
int main()
{
	queue q;
	int choice,x=1;
	q.rear=-1;
	q.front=0;
	while(x!=0)
	{
	printf("Enter ur choice as:\n1 to enqueue\n2 for dequeue\n3 to see the queue status\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: enqueue(&q);
				break;
		case 2: dequeue(&q);
				break;
		case 3: view(&q);
				break;		
		default: printf("WRONG choice\n");
				 break;
	}
	printf("Press any key axcept 0 to continue,otherwise press 0\n");
	scanf("%d",&x);
	}
	getch();
}
