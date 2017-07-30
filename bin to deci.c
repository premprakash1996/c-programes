#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int bin=0,n,i=0,num=0;
	printf("Enter the num in binry form");
	scanf("%d",&bin);
    while(bin!=0)
	{
		n=bin%10;
		num=num+n*pow(2,i);
		bin=bin/10;
		i++;
	}
	printf("%d",num);
	getch();
}
