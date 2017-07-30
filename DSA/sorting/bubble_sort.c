#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,t,x;
	printf("\n\n\t\t\t\t   BUBBLE SORT\n\n");
	printf("Enter the no of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		x=0;
		printf("Array after pass %d: ",i+1);
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				x=1;
			}	
			printf("%d ",a[j]);
		}
		for(j=n-1-i;j<n;j++)
		printf("%d ",a[j]);
		printf("\n");
		if(x==0)
		break;
	}
	getch();
}
