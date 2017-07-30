#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,q,p;
	scanf("%d%d",&n,&m);
	int a[n][m],i,j,k;
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
	if(m==q)
	{
		printf("multiplication is possible\n");
		int c[n][p];
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{	c[i][j]=0;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				for(k=0;k<p;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}			
			}
		}	
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("\t%d",c[i][j]);	
			}
			printf("\n");
		}
	}
	else 
	printf("multiplication not possible");
	getch();
}
