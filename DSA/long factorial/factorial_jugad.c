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
	printf("%d\n",(k+1)*5);
	printf("%d ",a[k]);
	for(i=k-1;i>=0;i--)
	{
		if(a[i]/10000!=0)
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
			for(j=0;j<5-l;j++)
			printf("0");
			printf("%d ",a[i]);
		}
		else
		{
			while(i>=0)	
			{
				printf("00000 ");	
				i--;
			}
			break;
		}
	}
	getch();
}
