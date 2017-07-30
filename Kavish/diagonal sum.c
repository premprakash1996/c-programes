#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,sum1=0,sum2=0;
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
		sum1=sum1+a[i][i];
	}
	printf("The diagonal1 sum is :%d\n",sum1);
	for(i=0;i<n;i++)
	{
		j=n-i-1;
		sum2=sum2+a[i][j];	
	}
	printf("The diagonal2 sum is :%d\n",sum2);
	
	
	if(n%2==0)
	printf("Total sum is %d",sum1+sum2);
	else
	printf("Total sum is %d",sum1+sum2-a[n/2][n/2]);
	getch();
}
