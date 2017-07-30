#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,q,p;
	scanf("%d%d",&n,&m);
	int a[n][m],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&q,&p);
	int b[q][p];
	for(i=0;i<q;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if((n==q)&&(m==p))
	{
		printf("Addition or substraction is compatible\n");
		printf("Addition is\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("\t%d",a[i][j]+b[i][j]);
			}
			printf("\n");		
		}
		printf("Substraction is\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("\t%d",a[i][j]-b[i][j]);
			}
			printf("\n");		
		}
	}
	else
	printf("Addition or substraction is not compatible");
	getch();
}
