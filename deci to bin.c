#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,num1,n,p=0;
	double bin=0;
	printf("Enter the number in decimal form : ");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		n=num%2;
		bin=bin+n*pow(10,p++);
		num=num/2;
		}
	printf("The binary form of %d is : %g",num1,bin);
	getch();	
}
