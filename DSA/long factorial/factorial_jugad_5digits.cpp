#include<stdio.h>
#include<conio.h>
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
			a[j]=x%10000;	
			l=x/10000;
		}
		while(l!=0)
		{
			q=l%10000;
			a[j++]=q;
			l=l/10000;
		}
		k=j-1;
	}
	printf("%d ",a[k]);
	for(i=k-1;i>=0;i--)
	{
		if(a[i]/1000!=0)
		printf("%d ",a[i]);
		else if(a[i]!=0)
		{
			l=0;
			j=a[i];
			while(j!=0)
			{
				l++;
				j=j/10;
			}	
			for(j=0;j<4-l;j++)
			printf("0");
			printf("%d ",a[i]);
		}
		else
		{	
				printf("0000 ");	
		}
	}
	getch();
}
