#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node1
{
	int element1;
	struct Node *next1;
}*start1,*ptr1;
struct Node2
{
	int elemen2;
	struct Node *next2;
}*start2,*ptr2;
struct Node* create()
{
	struct Node *ptr1=(struct Node *)malloc(1*sizeof(struct Node));
	int x;
	printf("enter element : ");scanf("%d",&x);
	ptr1->element1=x;
	ptr1->next=NULL;
return ptr;
}
void push(struct Node *ptr)
{
	if(start==NULL)start=ptr;
	else
	{
		ptr->next=start;
		start=ptr;
	}	
}
int  main()
{
	start=NULL;
	struct Node *temp;
	printf("enter linked list 1 \n ");
	temp=create();
	push(temp);
		
return 0;
}
