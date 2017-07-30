#include<stdio.h>
#include<conio.h>

int fabonacci(int a,int b,int i)
{
	int c;
	c=a+b;
	a=b;
	b=c;
	if(i>0)
	{
		printf("    %d",c);
		i=i-1;
	    fabonacci(a,b,i);
	    
	}
	else
	return 1;
}
int main()
{   int i,a=0,b=1;
	printf("the first two terms are 0 and 1\n\n");
	printf("enter the no of terms you want");
	scanf("%d",&i);
	printf("\n\n   ");
	fabonacci(a,b,i);
	getch();
}
