#include<stdio.h>
#include<conio.h>
int main()
{
	int n,s,i;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements for array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you wamt to search");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("Element %d found at position %d",s,i+1);
			break;	
		}	
	}
	if(i==n)
	printf("Sorry element not found");
	getch();
}
