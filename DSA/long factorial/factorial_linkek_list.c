#include<stdio.h>
#include<conio.h>
struct llist
{
	int a;
	struct llist *next;
}*p,*z,*h;
int main()
{
	int n,i,j,k=0,x,l,q;
	printf("Enter the no of which you want to calculate factorial:"); 
	scanf("%d",&n);
	p=(struct llist *)malloc(sizeof(struct llist));
	p->a=1;
	p->next=NULL;
	h=p;
	for(i=1;i<=n;i++)
	{
		l=0;
		for(j=0;j<=k;k++)
		{
			x=((p->a)*i)+1;	
			p->a=x%10;
			l=x/10;
			p=p->next;
		}		
		while(l!=0)
		{
			q=l%10;
			z=(struct llist *)malloc(sizeof(struct llist));
			z->a=q;
			z->next==NULL;
			p->next=z;		
			l=l/10;
		}
		k=j-1;
		p=h;
	}
	while(p->next!=NULL)
	{
		printf("%d",p->a);
		p=p->next;	
	}
	printf("%d",p->a);
	getch();
}
