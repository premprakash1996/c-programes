#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			b[i]=b[i]+a[j];
		}	
	}
	for(i=0;i<n;i++)
	printf("%d\n",b[i]);
	getch();
}
