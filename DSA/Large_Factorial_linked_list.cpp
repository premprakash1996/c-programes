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
			p->a=x%10000;
			l=x/10000;
			if(j!=k)
			p=p->next;
		}		
		while(l!=0)
		{
			q=l%10000;
			z=new llist;
			z->a=q;
			z->next=NULL;
			p->next=z;
			p=p->next;		
			l=l/10000;
			j++;
		}
		k=j-1;
		p=h;
	}
	prev=NULL;								//   TO REVERSE	
	while(p!=NULL)
	{
		z=p->next;
		p->next=prev;
		prev=p;
		p=z;
	}	 
	j=prev->a;
	while(j!=0)
	{
		l++;
		j=j/10;
	} 
	cout<<"There are "<<4*k+l<<" digits in "<<n<<"Factorial!!!\n\n";
	k=4*k+l;
	cout<<prev->a<<" ";						// TO PRINT
	prev=prev->next;
	while(prev!=NULL)                         
	{
		if(prev->a/1000!=0)
		cout<<prev->a<<" ";
		else if(prev->a!=0)
		{
			l=0;
			j=prev->a;
			while(j!=0)
			{
				l++;
				j=j/10;
			}	
			for(j=0;j<4-l;j++)
			cout<<"0";
			cout<<prev->a<<" ";
		}
		else
		{	
				cout<<"0000 ";	
		}
		prev=prev->next;
	}
	cout<<"\n"<<k;
	getch();
}
