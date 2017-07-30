#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the order of ULTIMATE MATRIX to be formed : ");
	scanf("%d",&n);

	int a[n][n],i,j,k,v=1;

	for(i=0;i<(n+1)/2;i++)
	{
		for(j=i;j<n-i;j++)
		{
			a[i][j]=v++;
		}	
		for(k=i+1;k<n-i;k++)
		{
			a[k][j-1]=v++;
		}

		for(j=n-2-i;j>=i;j--)
		{
			a[k-1][j]=v++;	
		}
		for(k=n-2-i;k>=i+1;k--)
		{
			a[k][j+1]=v++;	
		}
	
	}
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);	
	    printf("\n");
	}   
	getch();
}
