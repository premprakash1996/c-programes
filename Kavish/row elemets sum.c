#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m],i,j,rowsum[n];
	for(i=0;i<n;i++)
	{
		rowsum[i]=0;
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			rowsum[i]=rowsum[i]+a[i][j];
		}
    }	
	for(i=0;i<n;i++)
	{
		printf("sum of%d row elements is %d\n",i+1,rowsum[i]);
    }
	getch();
}		
