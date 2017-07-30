#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],b[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	getch();
}
