#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			printf("lol");
			break;
		}
	}
	if(i==((a/2)+1)||a==1)
	printf("yo");
	getch();
}
