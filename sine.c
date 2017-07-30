#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	printf("\n\n\n\n\t\t\t\tSINE FUNCTION");
	int n,i,sign=1;
	float x,sine=0;
	printf("\n\n\n\n\n\t\tEnter the value of x for sine(x) : ");
	scanf("%f",&x);
	printf("\n\n\t\tEnter the order of calculation : ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		int j,fact=1;
		for(j=i;j>=1;j--)
		fact=fact*j;
		sine=sine+(pow(x,i)/fact)*pow(-1,++sign);		
		}
	printf("\n\n\t\tThe value of sine(%f) is : %.3f",x,sine);
	getch();	
}
