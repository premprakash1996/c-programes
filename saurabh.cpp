#include<stdio.h>
#include<conio.h>

int func(int i)
{
	if(i>0)
	{
	printf("\n\tchutiye value of i is %d",i);
	i=i-1;
	return func(i);
	}
	else
	return 1;
}

int main()
{
	printf("program for recursion");
	int i=10;
	func(i);
	getch();
}
