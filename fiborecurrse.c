#include<stdio.h>
#include<conio.h>
void recurrse(int a,int b,int p)
	{
		int temp;
		a=a+b;
		temp=b;
		b=a;
		printf("\t%d",a);
		a=temp;
		if(p>3)
		recurrse(a,b,p-1);
	}
int main()
{
	int a,b,p;
	a=0;
	b=1;
	scanf("%d",&p);
	printf("%d\t%d",a,b);	
	recurrse(a,b,p);
	getch();
}
