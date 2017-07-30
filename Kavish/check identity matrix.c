#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the order of matrix : ");
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("Enter the %d elements for matrix",n*n);
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is :\n");
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");	
	}

	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				{
					printf("Not identity");
					goto s;
				}
			}
			else
			{
				if(a[i][j]!=0)
				{
					printf("Not identity");
					goto s;
				}		
			}	
		}	
	}
	printf("yess identity");
	s:
	getch();
}
