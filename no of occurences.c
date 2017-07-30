#include<stdio.h>
#include<conio.h>
int main()
{
	int n,s,i,o=0;
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
			o++;	
		}	
	}
	printf("No of Occurrences of the element %d is %d",s,o);
	getch();
}
