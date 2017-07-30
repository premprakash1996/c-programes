#include<stdio.h>
#include<conio.h>
 int main()
{
	int n,i,j,t;
	printf("\n\n\t\t\t\tINSERTION SORT\n\n");
	printf("Enter the no of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		j=i+1;
		while(j>0&&a[j]<a[j-1])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}	
		printf("\nArray after pass %d:",i+1);
		for(j=0;j<n;j++)
		printf("%d ",a[j]);
	}
	getch();
}
