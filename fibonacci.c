#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the number of terms to be displayed : ");
	scanf("%d",&n);
	printf("\nThe fibonacci series is : \n%d\t%d",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		}
	getch();
}
