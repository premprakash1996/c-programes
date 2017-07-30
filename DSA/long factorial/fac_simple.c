#include<stdio.h>
#include<conio.h>
int main()
{
	long long int fac=1;
	int i,n;
	printf("Enter the no you want to calculate factorial of:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fac=fac*i;
	}
	printf("%lld",fac);
	getch();
}
	
