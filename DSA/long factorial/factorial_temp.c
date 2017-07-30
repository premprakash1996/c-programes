// count zeroes at the end
#include<stdio.h>
#include<conio.h>
/*
int main()
{
	int a[100000]={1},i,n,j,l,x,k=0,q,z=0;
	printf("Enter the no you want to calculate factorial of:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=0;
		for(j=0;j<=k;j++)
		{
			x=(a[j]*i)+l;
			a[j]=x%10;	
			l=x/10;
		}
		while(l!=0)
		{
			q=l%10;
			a[j++]=q;
			l=l/10;
		}
		k=j-1;
	}
	i=0;
	while(a[i]==0)
	i++;
	printf("%d",i);	
	getch();
}
*/
int main()
{
	int a[100000]={1},i,n,j,l,x,k=0,q;
	printf("Enter the no you want to calculate factorial of:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=0;
		for(j=0;j<=k;j++)
		{
			x=(a[j]*i)+l;
			a[j]=x%100000;	
			l=x/100000;
		}
		while(l!=0)
		{
			q=l%100000;
			a[j++]=q;
			l=l/100000;
		}
		k=j-1;
	}
	for(i=k;i>=0;i--)
	{
		if(a[i]!=0)
		printf("%d ",a[i]);
		else
		printf("00000 ");
	}
	getch();
}
