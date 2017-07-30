#include<stdio.h>
#include<conio.h>
typedef struct 
{
	int a[5];
	int front,rear;
}cqueue;
void cenqueue(cqueue *q)
{
	int e;
	if((q->rear-q->front==4)||(q->front-q->rear==1))
	printf("The circular queue is overflow.\n");
	else
	{
		printf("Enter the element to be inserted\n");
		scanf("%d",&e);
		if(q->rear==-1&&q->front==-1)
		{
			q->rear++; q->front++;
			q->a[q->rear]=e;
		}
		else
		{
		q->rear=(q->rear+1)%5;
		q->a[q->rear]=e;
		}
	}
}
void cdequeue(cqueue *q)
{
	if(q->front==q->rear&&q->front!=-1)
	{
		q->front=-1;
		q->rear=-1;
	}
	else 
	{
		if(q->front==-1&&q->rear==-1)
		printf("The circular queue is already empty(underflow).\n");	
		else 
		q->front=(q->front+1)%5;
	}	
}
void cview(cqueue *q)
{
	int i,l;
	printf("The status of the circular queue is:\n");
	l=q->rear;
	if(q->front>q->rear)
	l=5+q->rear;
	for(i=q->front;i<=l;i++)
	printf("%d\n",q->a[i%5]);
}
int main()
{
	cqueue q;
	int choice,x=1;
	q.rear=-1;
	q.front=-1;
	while(x!=0)
	{
	printf("Enter ur choice as:\n1 to enqueue\n2 for dequeue\n3 to see the queue status\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: cenqueue(&q);
				break;
		case 2: cdequeue(&q);
				break;
		case 3: cview(&q);
				break;		
		default: printf("WRONG choice\n");
				 break;
	}
	printf("Press any key axcept 0 to continue,otherwise press 0\n");
	scanf("%d",&x);
	}
	getch();
}
