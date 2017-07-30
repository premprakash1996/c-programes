#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,t,k;
	printf("\n\n\t\t\t\tSELECTION SORT\n\n");
	printf("Enter the no of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		t=a[0];
		k=0;
		for(j=1;j<n-i;j++)
		{
			if(a[j]>t)
			{
				t=a[j];
				k=j;
			}
		}
		a[k]=a[n-i-1];	
		a[n-i-1]=t;
		printf("\nArray after pass %d: ",i+1);
		for(j=0;j<n;j++)
		printf("%d ",a[j]);
	}
	getch();
}
