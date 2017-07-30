#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m],i,j,columnsum[m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<m;j++)
		{
			columnsum[j]=0;
		}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			columnsum[j]=columnsum[j]+a[i][j];
		}
    }	
	for(j=0;j<m;j++)
	{
		printf("sum of%d row elements is %d\n",j+1,columnsum[j]);
    }
	getch();
}		
