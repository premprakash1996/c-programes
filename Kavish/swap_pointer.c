#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	int *p,*q;
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("%d\n%d",a,b);
	getch();
}
