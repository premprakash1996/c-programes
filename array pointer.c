#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5]={2,4,6,8,10};
	int *b,*c;
	b=&a[0];
	c=&a[0];
	for(i=0;i<5;i++)
	printf("\n%d=%d",*(c+1),*(b++));
	getch();	
}
