#include<stdio.h>
#include<conio.h>
int q=2;
void recurrse(int a,int b,int p)
	{
		int temp;
		q++;
		a=a+b;
		temp=b;
		b=a;
		printf("\t%d",a);
		a=temp;
		if(q<p)
		recurrse(a,b,p);
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
