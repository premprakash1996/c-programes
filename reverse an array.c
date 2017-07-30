#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,temp;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements for array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;	
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	getch();
}
	
