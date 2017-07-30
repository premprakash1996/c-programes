#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter the order of matrix : ");
	scanf("%d",&n);
	int a[n][n];
	
	printf("Enter %d elements for matrix\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("So the matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("\t%d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				printf("Not symmetric");
				goto s;
			}	
		}
	}
	printf("Yes Symmetric");
	s:	
   	getch();
}
