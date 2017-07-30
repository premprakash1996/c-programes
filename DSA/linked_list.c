#include<stdio.h>
#include<conio.h>
struct list
{
	int data;
	struct list *next;
};
void create_list(struct list *node)
{
	int x;
	struct list *newnode;
	printf("Enter x");
	scanf("%d",&x);
	while(x==1)
	{ 
	newnode=(struct list *)malloc(sizeof(struct list));
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	node->next=newnode;
	node=newnode;
	printf("Enter x");
	scanf("%d",&x);
	}
}
void display_list(struct list *node)
{
	do 
	{
		printf("%d->",node->data);
		node=node->next;	
	}while(node->next!=NULL);
	printf("%d",node->data);
}
int main()
{
	int x=1;
	struct list *node;
	node=(struct list *)malloc(sizeof(struct list));
	scanf("%d",&node->data);
	node->next=NULL;
	create_list(node);
	
    display_list(node);
	getch();
}
