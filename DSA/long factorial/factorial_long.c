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
	printf("%d\n",k+1);
	for(i=k;i>=0;i--)
	printf("%d ",a[i]);
	printf("\n%d",k+1);
	getch();
}
