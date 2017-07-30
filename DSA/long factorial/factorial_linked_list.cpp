#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct llist
{
	int a;
	struct llist *next;
};
int main()
{
	struct llist *p,*z,*h,*prev;
	int n,i,j,k=0,x,l,q;
	cout<<"Enter the no of which you want to calculate factorial:"; 
	cin>>n;
	p=new llist;
	p->a=1;
	p->next=NULL;
	h=p;
	for(i=1;i<=n;i++)
	{
		l=0;
		for(j=0;j<=k;j++)
		{
			x=((p->a)*i)+l;	
			p->a=x%10;
			l=x/10;
			if(j!=k)
			p=p->next;
		}		
		while(l!=0)
		{
			q=l%10;
			z=new llist;
			z->a=q;
			z->next=NULL;
			p->next=z;
			p=p->next;		
			l=l/10;
			j++;
		}
		k=j-1;
		p=h;
	}
/*	for(i=0;i<=k;i++)
	{	for(j=1;j<=k-i;j++)
		{									head=h;
											p=curr;					
			p=p->next;						z=n	
		}
		cout<<p->a;
		p=h;
	}
*/
	prev=NULL;								//   TO REVERSE
	while(p!=NULL)
	{
		z=p->next;
		p->next=prev;
		prev=p;
		p=z;
	}	  
	while(prev!=NULL)                         // TO PRINT
	{
		cout<<prev->a<<" ";
		prev=prev->next;
	}
	cout<<"\n"<<k+1;
	getch();
}
