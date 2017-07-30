#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a[100000]={1},x,i,n,j,l,m,o,k=0,q;
	printf("Enter the no you want to calculate factorial of:");
	scanf("%d",&n);
	printf("Enter the sets of no of digits in which you want the ans() :");
	scanf("%d",&o);
	m=pow(10,o);
	for(i=1;i<=n;i++)
	{
		l=0;
		for(j=0;j<=k;j++)
		{
			x=(a[j]*i)+l;
			a[j]=x%m;	
			l=x/m;
		}
		while(l!=0)
		{
			q=l%m;
			a[j++]=q;
			l=l/m;
		}
		k=j-1;
	}
	printf("The no of digits :%d\n",o*(k+1));
	printf("%d ",a[k]);
	for(i=k-1;i>=0;i--)
	{
		if(a[i]/(m/10)!=0)
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
			for(j=0;j<o-l;j++)
			printf("0");
			printf("%d ",a[i]);
		}
		else
		{
				l=o;
				while(l!=0)
				{ printf("0");	l--; }
				printf(" ");
		}
	}
	getch();
}
